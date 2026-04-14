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

- (id)statusForDebug:(BOOL)a0;
- (void)invalidate;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void)stop;
- (void)handleOptimizeModeChange;
- (double)_minimumIntervalBetweenOperations;
- (id)init;
- (void)clearPrefetchState;
- (void)handleCPLStatusChange;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (void)handleCPLConfigurationChange;
- (void)updateCacheDeletePurgeableAmount;
- (void).cxx_destruct;

@end
