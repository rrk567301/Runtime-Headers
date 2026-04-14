@class NSDate, PLLibraryServicesManager, PLCloudResourcePrefetchManager, NSObject, PLCloudResourcePruneManager;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLLibraryServicesManager *_libraryServicesManager;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}

- (void)stop;
- (id)statusForDebug:(BOOL)a0;
- (void)clearPrefetchState;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)updateCacheDeletePurgeableAmount;
- (double)_minimumIntervalBetweenOperations;
- (void).cxx_destruct;
- (void)invalidate;
- (void)handleOptimizeModeChange;
- (id)init;
- (void)handleCPLConfigurationChange;
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void)handleCPLStatusChange;

@end
