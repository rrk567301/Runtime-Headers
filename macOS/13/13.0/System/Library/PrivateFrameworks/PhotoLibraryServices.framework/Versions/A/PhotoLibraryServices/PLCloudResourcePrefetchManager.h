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
}

+ (id)descriptionForPrefetchPhase:(unsigned long long)a0;
+ (id)_identifierForResourceDownload:(id)a0;
+ (id)_overridePrefetchMode;
+ (id)_descriptionForPrefetchMode:(long long)a0;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)stop;
- (void)clearPrefetchState;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (id)_volumeInfo;
- (id)initWithCPLManager:(id)a0 pruneManager:(id)a1 libraryServicesManager:(id)a2;
- (void)startAutomaticPrefetch;
- (void)_startAutomaticPrefetch;
- (void)handleCPLStatusChange;
- (void)handleCPLConfigurationChange;
- (void)handleOptimizeModeChange;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)a0 withReason:(id)a1;
- (void)_cleanupInflightResources;
- (id)prefetchStatusForDebug:(BOOL)a0;
- (id)_prefetchStatusForDebug:(BOOL)a0;
- (void)prefetchResourcesWithPredicates:(id)a0 photoLibrary:(id)a1 prefetchPhase:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_reloadDownloadOriginalsSetting;
- (void)_reloadDefaultDownload;
- (void)_runSynchronouslyOnWorkQueue:(id /* block */)a0;
- (unsigned long long)_countOfAllInflightResources;
- (unsigned long long)_countOfInflightResourcesForPrefetchPhase:(unsigned long long)a0;
- (id)_allInflightResourceIdentifiers;
- (id)_inflightResourceIdentifiersForPrefetchPhase:(unsigned long long)a0;
- (BOOL)_isInflightResourceIdentifier:(id)a0;
- (void)_addInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (void)_removeInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (void)_removeAllInflightResourceIdentifiers;
- (BOOL)_isPrefetchDisabled;
- (BOOL)_canPrefetch;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (void)_startPrefetchNextBatch;
- (unsigned long long)_intentForPrefetchPhase:(unsigned long long)a0;
- (void)_prefetchResources:(id)a0 photoLibrary:(id)a1 prefetchPhase:(unsigned long long)a2 shouldAutoPefetchNextBatch:(BOOL)a3;
- (void)_incrementPrefetchCountForPrefetchPhase:(unsigned long long)a0 resources:(id)a1 photoLibrary:(id)a2;
- (void)_handlePrefetchError:(id)a0 forPLCloudResourceWithObjectID:(id)a1;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0 prefetchOptimizeMode:(long long)a1;
- (long long)_totalSizeOfOriginalResourcesForPrefetchWithPredicate:(id)a0;
- (long long)_totalSizeOfOriginalResources;
- (long long)_totalSizeOfLocallyAvailableOriginalResources;
- (unsigned long long)_smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)a0;
- (long long)_prefetchOptimizeModeBasedOnLibrarySize;
- (void)_setLastCompletePrefetchDate:(id)a0;
- (void)_resourcesWithPredicate:(id)a0 photoLibrary:(id)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)a0;
- (void)_resourcesToPrefetchWithPrefetchPhase:(unsigned long long)a0 photoLibrary:(id)a1 applyPerPrefetchLimit:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
