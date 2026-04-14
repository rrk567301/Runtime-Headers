@class NSString, NSMutableArray;

@interface CRGGroup : NSObject <CRGNamed> {
    NSMutableArray *_childGroups;
    NSMutableArray *_nodes;
    NSMutableArray *_externalInputs;
    NSMutableArray *_externalOutputs;
}

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, weak, nonatomic) CRGGroup *parentGroup;
@property (readonly, nonatomic) CRGGroup *rootGroup;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithName:(id)a0;
- (void)addNode:(id)a0;
- (void).cxx_destruct;
- (void)addChildGroup:(id)a0;
- (void)addExternalInput:(id)a0;
- (void)addExternalOutput:(id)a0;
- (void)getExternalOutputs:(id)a0;
- (id)initWithName:(id)a0 group:(id)a1;

@end
