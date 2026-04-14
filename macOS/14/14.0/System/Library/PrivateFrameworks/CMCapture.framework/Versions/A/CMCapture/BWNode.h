@class BWNodeInput, NSString, NSArray, BWGraph, BWNodeOutput, NSMutableArray;
@protocol BWNodeRenderDelegate;

@interface BWNode : NSObject {
    BWNodeInput *_input;
    BWNodeOutput *_output;
    NSMutableArray *_inputs;
    NSMutableArray *_outputs;
    BOOL _singleInput;
    BOOL _singleOutput;
    long long _configurationID;
}

@property (nonatomic) BOOL supportsConcurrentLiveInputCallbacks;
@property (nonatomic) BOOL supportsLiveReconfiguration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subgraphName;
@property (readonly) NSString *nodeType;
@property (readonly) NSString *nodeSubType;
@property (readonly) NSArray *inputs;
@property (readonly) NSArray *outputs;
@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (nonatomic) id<BWNodeRenderDelegate> renderDelegate;
@property (readonly, nonatomic) BOOL hasNonLiveConfigurationChanges;
@property (nonatomic) BWGraph *graph;
@property (nonatomic) int deferredPreparePriority;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)addInput:(id)a0;
- (void)addOutput:(id)a0;
- (long long)configurationID;
- (void)setConfigurationID:(long long)a0;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (BOOL)allInputsHaveReachedState:(int)a0;
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
- (BOOL)input:(id)a0 hasReachedState:(int)a1;
- (void)makeCurrentConfigurationLive;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)suspendResources;

@end
