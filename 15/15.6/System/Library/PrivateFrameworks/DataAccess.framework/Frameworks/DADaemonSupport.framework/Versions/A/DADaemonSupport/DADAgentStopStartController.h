@class NSMutableArray;
@protocol DADAgentStopStartControllerDelegate;

@interface DADAgentStopStartController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _agentsStopped;
    char _unexecutedStopReceived;
    int _stopsLessStartsReceived;
    char _blockEnqueued;
    int _generation;
    NSMutableArray *_pendingStopCompletionBlocks;
    NSMutableArray *_pendingStartCompletionBlocks;
    unsigned long long _serverToken;
    id<DADAgentStopStartControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)reset;
- (char)_blockNotEnqueuedAndPendingWork;
- (int)enqueueDisableMonitoringAgents:(id /* block */)a0;
- (char)_blockShouldStart:(char *)a0 shouldStop:(char *)a1;
- (void)_enqueueBlockIfNotEnqueuedAndPendingWork;
- (void)callBlocks:(id)a0;
- (void)enqueueEnableMonitoringAgentsWithGeneration:(int)a0 completion:(id /* block */)a1;
- (void)startOrStopAsNeeded;

@end
