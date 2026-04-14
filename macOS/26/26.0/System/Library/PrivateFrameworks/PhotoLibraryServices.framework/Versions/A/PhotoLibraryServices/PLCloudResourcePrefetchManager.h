@class PLCloudResourcePruneManager, NSDate, PLLibraryServicesManager, PLVolumeInfo, NSDictionary, PLCloudPhotoLibraryManager, NSObject, PLPrefetchConfiguration;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePrefetchManager : NSObject {
    PLLibraryServicesManager *_lsm;
    PLCloudPhotoLibraryManager *_cplManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDictionary *_inflightResources;
    long long _prefetchMode;
    long long _prefetchOptimizeMode;
    NSDate *_lastCheckCPLBGDownloadDate;
    BOOL _enqueuedCheckCPLBGDownload;
    NSObject<OS_dispatch_queue> *_workQueue;
    PLVolumeInfo *_volumeInfo;
    NSDate *_initialSyncDate;
    NSDate *_lastCompletePrefetchDate;
    PLPrefetchConfiguration *_prefetchConfiguration;
    BOOL _isWalrusEnabled;
}

+ (BOOL)_hasAssetsNeedingOneTimeThumbRebuildInContext:(id)a0;
+ (id)_identifierForResourceDownload:(id)a0;
+ (void)resourcesToPrefetchWithPrefetchPhase:(unsigned long long)a0 prefetchMode:(long long)a1 prefetchOptimizeMode:(long long)a2 initialSyncDate:(id)a3 lastCompletePrefetchDate:(id)a4 initialBudget:(long long)a5 excludeDynamicCPLResources:(BOOL)a6 prefetchConfiguration:(id)a7 photoLibrary:(id)a8 applyPerPrefetchLimit:(BOOL)a9 resultHandler:(id /* block */)a10;
+ (id)descriptionForPrefetchMode:(long long)a0;
+ (id)_fetchThumbnailResourcesForAssets:(id)a0 version:(unsigned int)a1 maxRetry:(unsigned long long)a2 inContext:(id)a3 error:(id *)a4;
+ (id)_resourcesWithPredicate:(id)a0 limit:(unsigned long long)a1 context:(id)a2;
+ (id)thumbnailResourcesNeedingPrefetchInContext:(id)a0 maxRetry:(unsigned long long)a1 limit:(long long)a2;
+ (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)a0 givenMode:(long long)a1 andInitialSyncDate:(id)a2;
+ (id)descriptionForPrefetchPhase:(unsigned long long)a0;

- (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)a0;
- (void)_writeDownloadFinishedMarkerIfNeededWithLibrary:(id)a0;
- (void)_removeInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)a0 withReason:(id)a1;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0;
- (void)invalidate;
- (void)stop;
- (id)_lastCompletePrefetchDateInLibrary:(id)a0;
- (void)handleOptimizeModeChange;
- (id)_resourcesToPrefetchWithPrefetchPhase:(unsigned long long)a0 photoLibrary:(id)a1 applyPerPrefetchLimit:(BOOL)a2 initialBudget:(long long *)a3;
- (void)_startAutomaticPrefetch;
- (void)_checkCPLBackgroundDownloadOperations;
- (BOOL)_isPrefetchDisabled;
- (id)_prefetchStatusForDebug:(BOOL)a0;
- (BOOL)_isInflightResourceIdentifier:(id)a0;
- (void)prefetchResourcesWithPredicates:(id)a0 photoLibrary:(id)a1 prefetchPhase:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (long long)_totalSizeOfLocallyAvailableOriginalResources;
- (unsigned long long)_intentForPrefetchPhase:(unsigned long long)a0;
- (id)init;
- (id)initWithCPLManager:(id)a0 pruneManager:(id)a1 libraryServicesManager:(id)a2;
- (void)clearPrefetchState;
- (void)handleCPLStatusChange;
- (BOOL)_canPrefetchInLibrary:(id)a0;
- (void)_incrementPrefetchCountForPrefetchPhase:(unsigned long long)a0 resources:(id)a1 photoLibrary:(id)a2;
- (void)_addInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1;
- (unsigned long long)_smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)a0;
- (unsigned long long)_countOfAllInflightResources;
- (void)_startPrefetchNextBatch;
- (void)_removeAllInflightResourceIdentifiers;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (unsigned long long)_countOfInflightResourcesForPrefetchPhase:(unsigned long long)a0;
- (void)_prefetchComputeSyncResources:(id)a0 photoLibrary:(id)a1 prefetchPhase:(unsigned long long)a2 shouldAutoPrefetchNextBatch:(BOOL)a3;
- (void)startAutomaticPrefetch;
- (void)_setLastCompletePrefetchDate:(id)a0 inLibrary:(id)a1;
- (id)_inflightResourceIdentifiersForPrefetchPhase:(unsigned long long)a0;
- (void)handleCPLConfigurationChange;
- (long long)_totalSizeOfOriginalResources;
- (void)_handlePrefetchError:(id)a0 forPLCloudResourceWithObjectID:(id)a1;
- (id)prefetchStatusForDebug:(BOOL)a0;
- (id)_volumeInfo;
- (void)_cleanupInflightResourcesInLibrary:(id)a0;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0 prefetchOptimizeMode:(long long)a1;
- (long long)_prefetchOptimizeModeBasedOnLibrarySize;
- (id)_allInflightResourceIdentifiers;
- (void).cxx_destruct;
- (long long)_totalSizeOfOriginalResourcesForPrefetchWithPredicate:(id)a0;
- (void)_prefetchResources:(id)a0 photoLibrary:(id)a1 prefetchPhase:(unsigned long long)a2 shouldAutoPrefetchNextBatch:(BOOL)a3;

@end
