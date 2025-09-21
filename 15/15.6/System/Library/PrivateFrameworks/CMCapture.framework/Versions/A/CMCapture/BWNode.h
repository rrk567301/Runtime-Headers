@class BWNodeInput, NSString, NSArray, BWGraph, BWNodeOutput, NSMutableArray;
@protocol BWNodeRenderDelegate;

@interface BWNode : NSObject <FigCaptureOSStateDataProvider> {
    BWNodeInput *_input;
    BWNodeOutput *_output;
    NSMutableArray *_inputs;
    NSMutableArray *_outputs;
    char _singleInput;
    char _singleOutput;
    long long _configurationID;
}

@property (nonatomic) char supportsConcurrentLiveInputCallbacks;
@property (nonatomic) char supportsLiveReconfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subgraphName;
@property (readonly) NSString *nodeType;
@property (readonly) NSString *nodeSubType;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (nonatomic) id<BWNodeRenderDelegate> renderDelegate;
@property (readonly, nonatomic) char hasNonLiveConfigurationChanges;
@property (nonatomic) BWGraph *graph;
@property (nonatomic) int deferredPreparePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)removeOutput:(id)a0;
- (void)addOutput:(id)a0;
- (void)addInput:(id)a0;
- (long long)configurationID;
- (void)setConfigurationID:(long long)a0;
- (id)osStatePropertyListWithVerbose:(char)a0;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (char)allInputsHaveReachedState:(int)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didSelectFormat:(id)a0 forOutput:(id)a1;
- (void)didSelectFormat:(id)a0 forOutput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (char)input:(id)a0 hasReachedState:(int)a1;
- (void)makeCurrentConfigurationLive;
- (id)osStatePropertyList;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)suspendResources;

@end
