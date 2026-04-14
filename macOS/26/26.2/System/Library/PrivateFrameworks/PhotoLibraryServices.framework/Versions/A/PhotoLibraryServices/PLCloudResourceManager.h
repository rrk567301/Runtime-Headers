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

- (void)invalidate;
- (void)handleCPLStatusChange;
- (void)stop;
- (void)clearPrefetchState;
- (double)_minimumIntervalBetweenOperations;
- (void)handleCPLConfigurationChange;
- (void)updateCacheDeletePurgeableAmount;
- (void).cxx_destruct;
- (void)handleOptimizeModeChange;
- (id)statusForDebug:(BOOL)a0;
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (id)init;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;

@end
