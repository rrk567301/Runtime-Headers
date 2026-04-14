@class BWNodeInput, NSString, NSArray, BWGraph, BWNodeOutput, NSMutableArray, NSObject;
@protocol OS_dispatch_group, BWNodeRenderDelegate;

@interface BWNode : NSObject <FigCaptureOSStateDataProvider> {
    BWNodeInput *_input;
    BWNodeOutput *_output;
    NSMutableArray *_inputs;
    NSMutableArray *_outputs;
    BOOL _singleInput;
    BOOL _singleOutput;
    long long _requestedConfigurationID;
    long long _preparedConfigurationID;
    long long _liveConfigurationID;
    NSObject<OS_dispatch_group> *_currentConfigurationGroup;
}

@property (nonatomic) BOOL supportsConcurrentLiveInputCallbacks;
@property (nonatomic) BOOL supportsLiveReconfiguration;
@property (nonatomic) BOOL supportsPrepareWhileRunning;
@property (nonatomic) BOOL requiresEndOfDataForConfigurationChanges;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subgraphName;
@property (readonly, nonatomic) NSString *briefName;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)suspendResources;
- (void)makeCurrentConfigurationLive;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)a0 forInput:(id)a1;
- (id)messageDispatchQueueForOutput:(id)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (long long)liveConfigurationID;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)setRequestedConfigurationID:(long long)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)init;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)addInput:(id)a0;
- (BOOL)allInputsHaveReachedState:(int)a0;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)osStatePropertyList;
- (void)addOutput:(id)a0;
- (void)handleStillImagePrewarmWithSettings:(id)a0 resourceConfig:(id)a1 forInput:(id)a2;
- (void)_handleMessage:(id)a0 fromInput:(id)a1;
- (void)dealloc;
- (void)didSelectFormat:(id)a0 forOutput:(id)a1;
- (void)removeOutput:(id)a0;
- (long long)preparedConfigurationID;
- (long long)requestedConfigurationID;
- (void)removeInput:(id)a0;
- (id)osStatePropertyListWithVerbose:(BOOL)a0;
- (id)currentConfigurationGroup;
- (void)didSelectFormat:(id)a0 forOutput:(id)a1 forAttachedMediaKey:(id)a2;
- (BOOL)input:(id)a0 hasReachedState:(int)a1;
- (void)notifyWhenEndOfConfigurationIsHandledUsingQueue:(id)a0 block:(id /* block */)a1;
- (void)waitUntilEndOfConfigurationHandled;

@end
