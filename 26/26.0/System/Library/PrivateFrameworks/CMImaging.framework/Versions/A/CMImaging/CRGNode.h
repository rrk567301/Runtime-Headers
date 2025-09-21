@class NSArray, NSString, NSMutableDictionary, CRGOutput, CRGGroup;

@interface CRGNode : NSObject <CRGNamed, CRGLockable, CRGPortFactory, CRGTextureArgsFactory> {
    CRGOutput *_primaryOutput;
    NSMutableDictionary *_inputs;
    NSMutableDictionary *_outputs;
    NSArray *_inputArray;
    NSArray *_outputArray;
}

@property (nonatomic) BOOL locked;
@property (nonatomic) BOOL resolved;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) int portCount;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, weak, nonatomic) CRGGroup *group;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)areAllInputsResolved;
- (BOOL)calcAllInputROIForOutputROI:(struct { })a0;
- (id)getPrimaryOutput;
- (id)initWithName:(id)a0 group:(id)a1;
- (id)inputWithDescriptor:(id)a0;
- (id)outputWithDescriptor:(id)a0;
- (id)textureArgsWithStructName:(id)a0;
- (BOOL)verifyAllInputsConnected;

@end
