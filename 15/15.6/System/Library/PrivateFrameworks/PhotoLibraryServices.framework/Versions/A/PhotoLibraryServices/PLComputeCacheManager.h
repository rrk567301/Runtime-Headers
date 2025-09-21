@class NSDate, PLJournalManager, PLCoreAnalyticsEventManager, PLLibraryServicesManager, PLPhotoLibrary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface PLComputeCacheManager : NSObject <PLCloudAssetPayloadRestoreDelegate, PLJournalManager> {
    PLLibraryServicesManager *_lsm;
    PLJournalManager *_journalManager;
    PLCoreAnalyticsEventManager *_coreAnalyticsManager;
    NSNumber *_restoreState;
    PLPhotoLibrary *_restoreCachePhotoLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _restoreStateLock;
    NSDate *_iCloudBackupRestoreDateStart;
}

@property (readonly, nonatomic) char isReadyForAnalysis;

+ (id)name;
+ (char)isEnabledWithPathManager:(id)a0 error:(id *)a1;
+ (id)_urlForLocation:(long long)a0 pathManager:(id)a1 createIfNeeded:(char)a2 error:(id *)a3;
+ (id)baseURLFromPathManager:(id)a0;
+ (id)payloadClasses;
+ (id)restorePayloadClasses;
+ (char)shouldPublishAnalyticsForRestoreError:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (id)status;
- (void)_publish;
- (void)stop;
- (id)managedObjectContext;
- (long long)_restoreState;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)performTransactionAndWait:(id /* block */)a0;
- (id)resolveLocalIdentifiersForCloudIdentifiers:(id)a0 error:(id *)a1;
- (id)_snapshotPolicy;
- (unsigned long long)_getArchiveSize;
- (char)_addBackupCreatedMarkerWithError:(id *)a0;
- (char)_archivePrepareDirectoryWithError:(id *)a0;
- (char)_archiveSnapshotIfNecessaryWithError:(id *)a0;
- (char)_archiveSnapshotWithError:(id *)a0;
- (id)_cachedPolicyConfiguration;
- (void)_cleanupLegacyArchiveFilename;
- (char)_cleanupLegacyArchiveURL:(id)a0 replacementURL:(id)a1 error:(id *)a2;
- (char)_createArchiveWithError:(id *)a0;
- (void)_enumerateComputeCachePrepareDirectoryUsingBlock:(id /* block */)a0;
- (id)_filenameExclusionList;
- (char)_getRestoreCount:(short *)a0 error:(id *)a1;
- (char)_hasBackupArchive;
- (char)_hasBackupCreatedMarker;
- (char)_hasPrepareDataToBackupWithError:(id *)a0;
- (long long)_iCloudBackupState;
- (char)_incrementRestoreCount:(short *)a0 error:(id *)a1;
- (char)_isInitialSyncWithInitialSyncDate:(id)a0;
- (char)_isValidArchiveURL:(id)a0 filenameExclusionList:(id)a1;
- (long long)_libraryAssetCount;
- (id)_newTransientContext;
- (long long)_performBlockOnRestoreStateLockAndWait:(id /* block */)a0;
- (char)_performSnapshotWithError:(id *)a0;
- (char)_removeComputeCacheDataForMatchingRestoreState:(long long)a0 error:(id *)a1;
- (char)_removeLocation:(long long)a0 error:(id *)a1;
- (char)_removeRestoreDataWithError:(id *)a0;
- (char)_removeSnapshotWithError:(id *)a0;
- (void)_resetRestoreState;
- (char)_restoreComputeCacheArchiveWithProgress:(id)a0 error:(id *)a1;
- (char)_restoreComputeCacheWithProgress:(id)a0 error:(id *)a1;
- (void)_setICloudBackupRestoreDateFromArchive;
- (void)_setRestoreState:(long long)a0;
- (id)_shortLivedLibrary;
- (char)_snapshotJournalsWithError:(id *)a0;
- (char)_transferAndPrepareComputeCacheFromBackupToRestoreLocationWithError:(id *)a0;
- (char)_transferToBackupLocationWithError:(id *)a0;
- (void)_updateCachedPolicyConfigurationWithCPLConfiguration:(id)a0;
- (void)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 completionHandler:(id /* block */)a2;
- (char)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 error:(id *)a2;
- (char)createArchiveWithError:(id *)a0;
- (void)notifyCPLConfiguration:(id)a0;
- (void)notifyReadyToRestoreWithInitialSyncDate:(id)a0;
- (char)resetComputeCacheWithError:(id *)a0;
- (char)restoreComputeCacheWithProgress:(id)a0 error:(id *)a1;
- (char)snapshotComputeCacheAndBackupIfNeededWithError:(id *)a0;
- (char)snapshotJournalsForPayloadClassIDs:(id)a0 error:(id *)a1;
- (void)snapshotJournalsForPayloadClassIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)statusFromPolicy:(id)a0;

@end
