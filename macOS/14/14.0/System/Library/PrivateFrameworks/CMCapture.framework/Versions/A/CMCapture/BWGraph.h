@class BWMemoryPoolFlushAssertion, NSString, NSArray, BWMemoryAnalyticsPayload, NSMutableDictionary, NSObject, NSMutableArray, BWMemoryPool;
@protocol OS_dispatch_group, BWGraphStatusDelegate, OS_dispatch_queue;

@interface BWGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableArray *_sourceNodes;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_connections;
    NSMutableArray *_outputsWithSharedPools;
    NSMutableDictionary *_outputsWithSharedPoolsForAttachedMedia;
    NSMutableArray *_nodesToPrepareConcurrently;
    NSArray *_nodesToPrepareAfterGraphStart;
    NSMutableArray *_deferredPreparePrioritySinks;
    BOOL _deferredNodePrepareCancelled;
    NSMutableArray *_deferredStartSourceNodes;
    BOOL _haveStartedOrCancelledDeferredSourceNodes;
    BOOL _running;
    BOOL _beingConfigured;
    long long _inflightConfigurationID;
    NSObject<OS_dispatch_group> *_sourceNodesStartGroup;
    NSObject<OS_dispatch_group> *_nonDeferredSourceNodesStartGroup;
    NSObject<OS_dispatch_queue> *_sourceStartQueue;
    NSObject<OS_dispatch_group> *_startGroup;
    NSObject<OS_dispatch_group> *_commitGroup;
    BOOL _supportsLiveReconfiguration;
    BOOL _classicRetainedBufferCount;
    NSString *_applicationID;
    int _clientPID;
    NSString *_modeDescription;
    NSString *_sourceDescription;
    int _graphStateTransitionTimeoutSeconds;
    unsigned int _configurationQueuePriority;
    BWMemoryPoolFlushAssertion *_flushAssertion;
}

@property int errorStatus;
@property (readonly, nonatomic) BOOL deferredNodePrepareEnabled;
@property (nonatomic) BOOL resumesConnectionsAsNodesArePrepared;
@property (readonly, nonatomic) BOOL supportsLiveReconfiguration;
@property (nonatomic) id<BWGraphStatusDelegate> statusDelegate;
@property (retain, nonatomic) BWMemoryPool *memoryPool;
@property (readonly, nonatomic, getter=isRunningForContinuityCapture) BOOL runningForContinuityCapture;
@property (nonatomic) BOOL memoryAnalyticsReportingEnabled;
@property (readonly, nonatomic) BWMemoryAnalyticsPayload *memoryAnalyticsPayload;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)beginConfiguration;
- (BOOL)stop:(id *)a0;
- (id)applicationID;
- (BOOL)start:(id *)a0;
- (int)clientPID;
- (void)setClientPID:(int)a0;
- (void)setApplicationID:(id)a0;
- (id)dotString;
- (void)enableConcurrentPrepareForNode:(id)a0;
- (id)modeDescription;
- (id)_breadthFirstEnumerator;
- (id)_depthFirstEnumeratorWithVertexOrdering:(int)a0;
- (BOOL)_resolveFormats:(id *)a0;
- (id)_reverseBreadthFirstEnumerator;
- (id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)a0;
- (id)_sinkNodes;
- (id)_sourceNodes;
- (BOOL)addNode:(id)a0 error:(id *)a1;
- (void)cancelDeferredNodePrepare;
- (void)cancelDeferredSourceNodeStart;
- (BOOL)commitConfigurationWithID:(long long)a0 error:(id *)a1;
- (BOOL)connectOutput:(id)a0 toInput:(id)a1 pipelineStage:(id)a2;
- (void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)a0;
- (void)enableDeferredStartForSourceNode:(id)a0;
- (id)initWithConfigurationQueuePriority:(unsigned int)a0;
- (void)notifyWhenNonDeferredSourceNodesHaveStarted:(id /* block */)a0;
- (void)setModeDescription:(id)a0;
- (void)setSourceDescription:(id)a0;
- (id)sourceDescription;
- (void)startDeferredNodePrepareIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)startDeferredSourceNodesIfNeeded;
- (void)waitForNonDeferredSourceNodesToStart;
- (void)waitForStartOrCommitToComplete;

@end
