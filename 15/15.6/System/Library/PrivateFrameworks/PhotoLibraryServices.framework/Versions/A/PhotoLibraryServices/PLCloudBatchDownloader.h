@class PLLibraryServicesManager, PLCloudPhotoLibraryManager;

@interface PLCloudBatchDownloader : NSObject {
    PLCloudPhotoLibraryManager *_manager;
    PLLibraryServicesManager *_lsm;
}

+ (id)_adjustmentStateDictionaryForComparingIncomingFaceRecordForAsset:(id)a0;

- (void).cxx_destruct;
- (id)_debugPrintAlbumOrderForAssets:(id)a0;
- (void)_handleDeleteRecords:(id)a0 inLibrary:(id)a1;
- (id)_handleMemoryRecords:(id)a0 inLibrary:(id)a1;
- (id)_handleMasterRecords:(id)a0 inLibrary:(id)a1;
- (void)_mergeUpdatedPersons:(id)a0 inLibrary:(id)a1;
- (void)_assetsAndCloudMastersFromAssetRecords:(id)a0 assetsByScopedIdentifier:(id *)a1 mastersByScopedIdentifier:(id *)a2 inLibrary:(id)a3;
- (void)_dropDeferredRebuildFacesInPhotoLibrary:(id)a0;
- (id)_findMaster:(id)a0 fromAdditionalRecordInBatch:(id)a1 inLibrary:(id)a2;
- (void)_handleAlbumRecords:(id)a0 inLibrary:(id)a1;
- (id)_handleAssetRecords:(id)a0 inSyncContext:(id)a1 withChangeBatch:(id)a2 insertedAssetUUIDs:(id *)a3;
- (void)_handleExpungedRecords:(id)a0 inLibrary:(id)a1;
- (void)_handleFaceCropRecords:(id)a0 inLibrary:(id)a1;
- (id)_handlePersonRecords:(id)a0 inLibrary:(id)a1 includesTiboSchema:(char *)a2;
- (void)_handleRelationsForAlbumRecords:(id)a0 orderKeyManager:(id)a1 inLibrary:(id)a2;
- (void)_handleRelationsForAssetRecords:(id)a0 orderKeyManager:(id)a1 inLibrary:(id)a2;
- (void)_handleScopeChanges:(id)a0 inLibrary:(id)a1;
- (void)_handleSocialGroupRecords:(id)a0 inLibrary:(id)a1;
- (id)_handleSuggestionRecords:(id)a0 inLibrary:(id)a1;
- (void)_mergeExistingPersonsWithPerson:(id)a0 inPhotoLibrary:(id)a1;
- (id)_mergeTargetFromPersons:(id)a0;
- (void)_processNotificationUpdatesForMemories:(id)a0;
- (void)_saveIfNeeded:(id)a0;
- (char)_shouldHandleNotificationChangeForMemory:(id)a0 memoryRecord:(id)a1 wasPersisted:(char)a2;
- (char)_shouldIgnoreIncomingManualOrderChange:(id)a0 localPerson:(id)a1;
- (char)_shouldIgnoreIncomingPersonTypeChange:(id)a0 localPerson:(id)a1;
- (void)_triggerBackgroundDownloadFailureForResources:(id)a0;
- (id)deletedRecordsFromBatch:(id)a0;
- (id)handleIncomingBatch:(id)a0;
- (id)initWithLibraryServicesManager:(id)a0 manager:(id)a1;

@end
