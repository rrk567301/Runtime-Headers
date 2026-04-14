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
- (void)stop;
- (double)_minimumIntervalBetweenOperations;
- (id)init;
- (id)statusForDebug:(BOOL)a0;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)handleCPLConfigurationChange;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (void)handleOptimizeModeChange;
- (void)handleCPLStatusChange;
- (void)clearPrefetchState;
- (void)updateCacheDeletePurgeableAmount;

@end
