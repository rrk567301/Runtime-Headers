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
- (void)clearPrefetchState;
- (void)handleCPLConfigurationChange;
- (void)handleCPLStatusChange;
- (id)statusForDebug:(BOOL)a0;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void)updateCacheDeletePurgeableAmount;
- (void)handleOptimizeModeChange;
- (id)initWithCPLManager:(id)a0 library:(id)a1;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (double)_minimumIntervalBetweenOperations;

@end
