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

- (void)handleCPLStatusChange;
- (void)invalidate;
- (void)stop;
- (double)_minimumIntervalBetweenOperations;
- (void)handleOptimizeModeChange;
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (void)handleCPLConfigurationChange;
- (void).cxx_destruct;
- (id)statusForDebug:(BOOL)a0;
- (void)updateCacheDeletePurgeableAmount;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)clearPrefetchState;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (id)init;

@end
