@class PLPhotoLibrary, PLLibraryServicesManager, NSMutableSet, PLLazyObject;

@interface PLDuplicateProcessor : NSObject {
    PLLibraryServicesManager *_lsm;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processingLock;
    NSMutableSet *_inFlightMergeAssetUuids;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inFlightMergeLock;
    PLLazyObject *_lazyAppPrivateData;
    char _enableEXIFDataAccess;
}

@property (retain) PLPhotoLibrary *unitTestLibrary;
@property (readonly) char isMerging;

+ (char)_removeAssetsFromDuplicateAlbumUsingFetchRequest:(id)a0 library:(id)a1 error:(id *)a2;
+ (char)isDuplicateProcessorEnabledForLibraryServicesManager:(id)a0;
+ (char)isExitingSharedLibraryForLibrary:(id)a0;
+ (char)removeAllDuplicateSharedLibraryAssetFromAlbumWithPhotoLibrary:(id)a0 error:(id *)a1;
+ (char)sharedLibraryDedupeEnabledWithPathManager:(id)a0;
+ (void)signalBackgroundJobServiceDuplicateProcessingWithLibrary:(id)a0;
+ (void)updateSharedLibraryIsEnabledFeatureVersionIfNeededWithPhotoLibrary:(id)a0 cplConfiguration:(id)a1;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)_appPrivateData;
- (char)_processMergeAlbumAssetOIDMap:(id)a0 localIdentifierMap:(id)a1 library:(id)a2 error:(id *)a3;
- (char)_batchEnumerateOrGenerateAssetObjectIdsFromStartingAssetOIDs:(id)a0 library:(id)a1 error:(id *)a2 continuationHandler:(id /* block */)a3 processingBatchBlock:(id /* block */)a4;
- (id)_buildInterruptBatchFromStartingOIDs:(id)a0 library:(id)a1;
- (char)_detectDuplicatesAndInsertIntoDuplicateAlbumWithPhotoLibrary:(id)a0 detector:(id)a1 duplicateType:(short)a2 error:(id *)a3;
- (id)_duplicateAlbumsFromAssets:(id)a0;
- (id)_fetchAssetOIDsForPhotoLibrary:(id)a0 error:(id *)a1;
- (id)_fetchAssetsFromOIDs:(id)a0 library:(id)a1 error:(id *)a2;
- (id)_fetchAssetsFromReference:(id)a0 isOID:(char)a1 library:(id)a2 error:(id *)a3;
- (id)_fetchAssetsFromUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
- (id)_fetchAssetsWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 error:(id *)a2;
- (id)_fetchCloudIdentifiersFromAssetUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
- (void)_inFlightMergeAssetsAddUUIDs:(id)a0;
- (void)_inFlightMergeAssetsRemoveUUIDs:(id)a0;
- (char)_insertIntoDuplicateAlbum:(id)a0 assets:(id)a1 duplicateType:(short)a2 photoLibrary:(id)a3 error:(id *)a4;
- (char)_isAssetValidForMerge:(id)a0;
- (char)_isMergeFeatureEnabled:(id *)a0;
- (char)_isValidSharedLibraryStateWithLibrary:(id)a0 error:(id *)a1;
- (char)_moveDuplicateAlbumAssestFromAlbums:(id)a0 toTargetAlbum:(id)a1 duplicateType:(short)a2 error:(id *)a3;
- (id)_photoLibrary;
- (id)_processAlbumGroupingFromAssets:(id)a0 localIdentifierToCloudIdentifiers:(id)a1 library:(id)a2;
- (void)_processCloudScopedIdentifierFromLocalIdentifiers:(id)a0 localToCloudIdentifierMap:(id)a1 cplManager:(id)a2 completionHandler:(id /* block */)a3;
- (void)_processCloudScopedIdentifiersFromAssetUUIDS:(id)a0 library:(id)a1 completionHandler:(id /* block */)a2;
- (id)_processContainersAssetUUIDS:(id)a0 library:(id)a1;
- (char)_processDuplicatesWithPhotoLibrary:(id)a0 processingType:(unsigned long long)a1 assetObjectIds:(id)a2 error:(id *)a3;
- (char)_processMergeAssets:(id)a0 localIdentifierMap:(id)a1 library:(id)a2 error:(id *)a3;
- (char)_processMergeGroup:(id)a0 processedAssetCount:(unsigned long long *)a1 skippedAssetCount:(unsigned long long *)a2 processedAssetCountAfterSave:(unsigned long long *)a3 library:(id)a4 error:(id *)a5;
- (char)_processMergeGroupContainer:(id)a0 processedAssetCount:(unsigned long long *)a1 skippedAssetCount:(unsigned long long *)a2 library:(id)a3 error:(id *)a4;
- (char)_processedDuplicateAssetSubGroupWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 duplicateType:(short)a2 error:(id *)a3;
- (id)_processedDuplicateAssetsWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 duplicateType:(short)a2 associatedDuplicateAlbum:(id *)a3 error:(id *)a4;
- (char)_processedRemoveExclusionGroupAssetsWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 error:(id *)a2;
- (id)_resumeInterruptMarker;
- (void)_setInterruptMarker:(id)a0;
- (char)assetsArePendingForDuplicateMergeProcessing:(id)a0;
- (void)mergeDuplicateAssetsWithAssetUUIDs:(id)a0 completionHandler:(id /* block */)a1;
- (char)processDuplicatesOfAssetObjectIds:(id)a0 processingType:(unsigned long long)a1 error:(id *)a2 continuationHandler:(id /* block */)a3;

@end
