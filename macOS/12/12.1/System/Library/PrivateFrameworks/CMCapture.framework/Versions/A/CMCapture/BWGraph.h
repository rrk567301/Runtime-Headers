@class NSMutableDictionary, BWMemoryPool, NSArray, NSString, NSMutableArray, NSObject;
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
}

@property int errorStatus;
@property (readonly, nonatomic) BOOL deferredNodePrepareEnabled;
@property (nonatomic) BOOL resumesConnectionsAsNodesArePrepared;
@property (readonly, nonatomic) BOOL supportsLiveReconfiguration;
@property (nonatomic) id<BWGraphStatusDelegate> statusDelegate;
@property (retain, nonatomic) BWMemoryPool *memoryPool;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (BOOL)stop:(id *)a0;
- (void)beginConfiguration;
- (int)clientPID;
- (void)setClientPID:(int)a0;
- (BOOL)start:(id *)a0;
- (void)setApplicationID:(id)a0;
- (id)applicationID;
- (id)dotString;
- (BOOL)addNode:(id)a0 error:(id *)a1;
- (BOOL)connectOutput:(id)a0 toInput:(id)a1 pipelineStage:(id)a2;
- (id)initWithConfigurationQueuePriority:(unsigned int)a0;
- (BOOL)_resolveFormats:(id *)a0;
- (void)startDeferredNodePrepareIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)startDeferredSourceNodesIfNeeded;
- (id)_reverseDepthFirstEnumeratorWithVertexOrdering:(int)a0;
- (id)_depthFirstEnumeratorWithVertexOrdering:(int)a0;
- (void)enableConcurrentPrepareForNode:(id)a0;
- (void)enableDeferredPrepareForNodesNotInPathOfSinkNode:(id)a0;
- (void)cancelDeferredNodePrepare;
- (void)enableDeferredStartForSourceNode:(id)a0;
- (void)cancelDeferredSourceNodeStart;
- (void)notifyWhenNonDeferredSourceNodesHaveStarted:(id /* block */)a0;
- (void)waitForNonDeferredSourceNodesToStart;
- (BOOL)commitConfigurationWithID:(long long)a0 error:(id *)a1;
- (void)waitForStartOrCommitToComplete;
- (id)modeDescription;
- (void)setModeDescription:(id)a0;
- (id)sourceDescription;
- (void)setSourceDescription:(id)a0;
- (id)_sourceNodes;
- (id)_sinkNodes;
- (id)_breadthFirstEnumerator;
- (id)_reverseBreadthFirstEnumerator;

@end
