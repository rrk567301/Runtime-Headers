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
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (void)updateCacheDeletePurgeableAmount;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)handleCPLStatusChange;
- (void)handleCPLConfigurationChange;
- (void)handleOptimizeModeChange;
- (double)_minimumIntervalBetweenOperations;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (id)statusForDebug:(BOOL)a0;

@end
