@class PLLibraryServicesManager, PLCloudPhotoLibraryManager, NSObject;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePruneManager : NSObject {
    PLLibraryServicesManager *_lsm;
    PLCloudPhotoLibraryManager *_cplManager;
    char _stopped;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (long long)_fetchResourcesForPruningWithBudget:(long long)a0 urgency:(long long)a1 batchHandler:(id /* block */)a2;
- (struct __CFDictionary { } *)_handleCacheDeletePurge:(int)a0 info:(struct __CFDictionary { } *)a1;
- (struct __CFDictionary { } *)_handleCacheDeletePurgeable:(int)a0 info:(struct __CFDictionary { } *)a1;
- (void)_handleCacheDeleteRegistration;
- (id)_identifierForResource:(id)a0;
- (long long)_localResourcesSize;
- (id)_predicateForPruneWithUrgency:(long long)a0;
- (long long)_purgeableAmountWithBudget:(long long)a0 debugString:(id)a1;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (long long)_totalPurgeableAmountForUrgency:(long long)a0;
- (void)_updateLocalStateForPrunedResources:(id)a0 inPhotoLibrary:(id)a1;
- (long long)diskSpaceToPrune;
- (void)handleOptimizeModeChange;
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (long long)pruneResources:(id)a0 inPhotoLibrary:(id)a1;
- (id)pruneStatusForDebug:(char)a0;
- (void)startAutomaticPruneWithBudget:(long long)a0 urgency:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateCacheDeletePurgeableAmount;

@end
