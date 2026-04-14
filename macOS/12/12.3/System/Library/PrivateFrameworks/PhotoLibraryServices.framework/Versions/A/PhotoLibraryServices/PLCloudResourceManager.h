@class PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithCPLManager:(id)a0 library:(id)a1;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void)handleOptimizeModeChange;
- (void)updateCacheDeletePurgeableAmount;
- (id)statusForDebug:(BOOL)a0;
- (void)clearPrefetchState;
- (void)handleCPLStatusChange;
- (void)handleCPLConfigurationChange;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (double)_minimumIntervalBetweenOperations;

@end
