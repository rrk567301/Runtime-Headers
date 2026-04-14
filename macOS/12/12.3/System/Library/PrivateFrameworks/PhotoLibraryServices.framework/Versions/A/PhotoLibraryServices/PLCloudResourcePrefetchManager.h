@class PLCloudResourcePruneManager, NSDate, PLVolumeInfo, NSDictionary, PLCloudPhotoLibraryManager, NSObject, PLPhotoLibrary, PLPrefetchConfiguration;
@protocol OS_dispatch_queue;

@interface PLCloudResourcePrefetchManager : NSObject {
    PLPhotoLibrary *_photoLibrary;
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

+ (id)_descriptionForPrefetchMode:(long long)a0;
+ (id)descriptionForPrefetchPhase:(unsigned long long)a0;
+ (id)_overridePrefetchMode;
+ (id)_identifierForResourceDownload:(id)a0;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)stop;
- (void)handleOptimizeModeChange;
- (void)clearPrefetchState;
- (void)handleCPLStatusChange;
- (void)handleCPLConfigurationChange;
- (id)initWithCPLManager:(id)a0 pruneManager:(id)a1 library:(id)a2;
- (void)prefetchResourcesWithPredicates:(id)a0 prefetchPhase:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (id)_volumeInfo;
- (void)_reloadDefaultDownload;
- (void)_startAutomaticPrefetch;
- (long long)_prefetchOptimizeModeBasedOnLibrarySize;
- (unsigned long long)_countOfAllInflightResources;
- (void)_checkCPLBackgroundDownloadOperations;
- (void)_startPrefetchNextBatch;
- (void)_reloadDownloadOriginalsSetting;
- (void)startAutomaticPrefetch;
- (void)_enqueueCheckCPLBGDownloadFromNow:(id)a0 withReason:(id)a1;
- (id)_allInflightResourceIdentifiers;
- (void)_cleanupInflightResources;
- (void)_removeAllInflightResourceIdentifiers;
- (void)_setLastCompletePrefetchDate:(id)a0;
- (id)_prefetchStatusForDebug:(BOOL)a0;
- (BOOL)_isPrefetchDisabled;
- (long long)_totalSizeOfOriginalResources;
- (long long)_totalSizeOfLocallyAvailableOriginalResources;
- (unsigned long long)_smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)a0;
- (BOOL)_prefetchIsEnabledForPhase:(unsigned long long)a0;
- (unsigned long long)_countOfInflightResourcesForPrefetchPhase:(unsigned long long)a0;
- (id)_inflightResourceIdentifiersForPrefetchPhase:(unsigned long long)a0;
- (void)_resourcesToPrefetchWithPrefetchPhase:(unsigned long long)a0 applyPerPrefetchLimit:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_prefetchResources:(id)a0 prefetchPhase:(unsigned long long)a1 shouldAutoPefetchNextBatch:(BOOL)a2;
- (void)_resourcesWithPredicate:(id)a0 limit:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_canPrefetch;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (void)_incrementPrefetchCountForPrefetchPhase:(unsigned long long)a0 resources:(id)a1;
- (BOOL)_isInflightResourceIdentifier:(id)a0;
- (unsigned long long)_intentForPrefetchPhase:(unsigned long long)a0;
- (void)_addInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (void)_removeInflightResourceIdentifier:(id)a0 prefetchPhase:(unsigned long long)a1 cplResource:(id)a2;
- (void)_handlePrefetchError:(id)a0 forPLCloudResourceWithObjectID:(id)a1;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0 prefetchOptimizeMode:(long long)a1;
- (long long)_totalSizeOfOriginalResourcesForPrefetchWithPredicate:(id)a0;
- (long long)_diskSpaceBudgetForPrefetchPhase:(unsigned long long)a0;
- (id)prefetchStatusForDebug:(BOOL)a0;

@end
