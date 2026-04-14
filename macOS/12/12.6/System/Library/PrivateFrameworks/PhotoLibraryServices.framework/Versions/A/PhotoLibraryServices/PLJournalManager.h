@class PLPhotoLibrary, NSPersistentHistoryToken, PLLibraryServicesManager, PLChangeHandlingNotificationObserver, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PLJournalManager : PLJournalManagerCore {
    PLLibraryServicesManager *_lsm;
    PLPhotoLibrary *_transientPhotoLibrary;
    PLChangeHandlingNotificationObserver *_changeHandlingNotificationObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_startupWaitGroup;
    unsigned short _state;
    NSPersistentHistoryToken *_currentHistoryToken;
    _Atomic BOOL _ignoreHistoryDuringSnapshot;
}

+ (BOOL)existingJournalsCompatibleForRebuild:(id)a0 error:(id *)a1;
+ (BOOL)assetJournalExists:(id)a0 error:(id *)a1;
+ (id)payloadClasses;
+ (Class)payloadClassForAdditionalEntityName:(id)a0;
+ (id)existingObjectWithID:(id)a0 managedObjectContext:(id)a1;
+ (id)entriesByPayloadClassIDFromHistoryToken:(id)a0 currentHistoryToken:(id *)a1 withManagedObjectContext:(id)a2 payloadIDsToSkipInserts:(id)a3 shouldStopBlock:(id /* block */)a4 error:(id *)a5;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_start;
- (void)snapshotJournalsForPayloadClassIDs:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1 completionHandler:(id /* block */)a2;
- (void)notifyWillRebuild;
- (void)notifyRebuildComplete;
- (void)recreateAssetsInManagedObjectContext:(id)a0 options:(unsigned char)a1 progress:(id)a2;
- (void)recreateNonAssetsInManagedObjectContext:(id)a0 progress:(id)a1;
- (id)initWithLibrayServicesManager:(id)a0;
- (void)_registerForChangeHandlingNotifications;
- (void)_unregisterForChangeHandlingNotifications;
- (void)_loadHistoryToken;
- (void)_startAfterRebuild;
- (BOOL)_needSnapshot;
- (BOOL)_performSnapshotsForceFull:(BOOL)a0 error:(id *)a1;
- (BOOL)_replayFromCurrentHistoryToken;
- (void)_retrySnapshot;
- (void)_handleChangeHandlingNotificationWithTransaction:(id)a0;
- (BOOL)_coalesceJournalsForPayloadClassIDs:(id)a0 withChangeJournalOverThreshold:(float)a1;
- (BOOL)_needPartialSnapshot:(id)a0;
- (BOOL)_needFullSnapshot;
- (id)newTransientContext;
- (BOOL)_replayFromCurrentHistoryTokenWithPayloadIDsToSkipInserts:(id)a0;
- (BOOL)_appendEntriesByPayloadClassID:(id)a0 withCurrentHistoryToken:(id)a1;
- (void)_recreateAssetsInManagedObjectContext:(id)a0 options:(unsigned char)a1 progress:(id)a2;
- (void)_recreateNonAssetsInManagedObjectContext:(id)a0 progress:(id)a1;
- (BOOL)_recreateResourcesForAsset:(id)a0 withPayload:(id)a1 resources:(id)a2 recreateOptions:(unsigned char)a3 storeOptions:(id)a4 libraryID:(id)a5 isCPLEnabled:(BOOL)a6;
- (id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)a0 outOnDiskURLs:(id)a1;
- (BOOL)forceFullSnapshot:(id *)a0;
- (void)recreateAllObjectsInManagedObjectContext:(id)a0 options:(unsigned char)a1;
- (id)assetsToImportFromAssetJournalInManagedObjectContext:(id)a0 outOnDiskURLs:(id)a1;
- (void)_removeLegacyPersistedMetadataIfNecessary;

@end
