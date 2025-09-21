@class NSArray, NSDictionary, NSString, NSMutableDictionary, EGGraph, EGOutput;
@protocol EGInputPort, EGNodeInput, EGElement, EGOutputPort;

@interface EGNode : NSObject <EGElement, EGPortInterface, EGInputHandler, EGInputGroupHandler> {
    EGGraph *_parentGraph;
    NSMutableDictionary *_outputs;
    NSMutableDictionary *_inputs;
    NSMutableDictionary *_inputPorts;
    id<EGNodeInput> _egNodeInput;
    id<EGInputPort> _egInputPort;
    EGOutput *_egOutput;
}

@property (readonly, nonatomic) NSDictionary *egInputsByName;
@property (readonly, nonatomic) NSDictionary *egOutputsByName;
@property (readonly, nonatomic) NSArray *egInputsFlat;
@property (readonly, nonatomic) id<EGNodeInput> egNodeInput;
@property (readonly, nonatomic) EGOutput *egOutput;
@property (readonly, nonatomic) NSDictionary *egInputPortsByName;
@property (readonly, nonatomic) id<EGInputPort> egInputPort;
@property (readonly, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<EGElement> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *egOutputPortsByName;
@property (readonly, nonatomic) id<EGOutputPort> egOutputPort;
@property (readonly, weak, nonatomic) EGGraph *parentGraph;

+ (void)initialize;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)setParentGraph:(id)a0;
- (id)inputInstalledWithName:(id)a0;
- (void)installInput:(id)a0;
- (void)installInputGroup:(id)a0;
- (void)installOutput:(id)a0;
- (id)outputInstalledWithName:(id)a0;
- (void)receiveData:(id)a0 fromInput:(id)a1;
- (void)receiveData:(id)a0 fromInputGroup:(id)a1;

@end
