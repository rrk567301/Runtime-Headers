@class PLLibraryServicesManager, NSMutableSet, PLLazyObject;

@interface PLDuplicateProcessor : NSObject {
    PLLibraryServicesManager *_lsm;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processingLock;
    NSMutableSet *_inFlightMergeAssetUuids;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inFlightMergeLock;
    PLLazyObject *_lazyAppPrivateData;
    BOOL _enableEXIFDataAccess;
}

+ (BOOL)isValidDuplicateProcessorForLibraryServicesManager:(id)a0;
+ (void)signalBackgroundJobSeviceDuplicateProcessingWithLibrary:(id)a0;

- (void).cxx_destruct;
- (id)_photoLibrary;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)_appPrivateData;
- (BOOL)processDuplicatesOfAssetObjectIds:(id)a0 processingType:(unsigned long long)a1 library:(id)a2 error:(id *)a3 continuationHandler:(id /* block */)a4;
- (BOOL)_batchEnumerateOrGenerateAssetObjectIdsFromStartingAssetOIDs:(id)a0 library:(id)a1 error:(id *)a2 continuationHandler:(id /* block */)a3 processingBatchBlock:(id /* block */)a4;
- (void)_setInterruptMarker:(id)a0;
- (id)_resumeInterruptMarker;
- (id)_buildInterruptBatchFromStartingOIDs:(id)a0 library:(id)a1;
- (BOOL)_processDuplicatesWithPhotoLibrary:(id)a0 processingType:(unsigned long long)a1 assetObjectIds:(id)a2 error:(id *)a3;
- (BOOL)_detectDuplicatesAndInsertIntoDuplicateAlbumWithPhotoLibrary:(id)a0 detector:(id)a1 duplicateType:(short)a2 error:(id *)a3;
- (BOOL)_processedDuplicateAssetSubGroupWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 duplicateType:(short)a2 error:(id *)a3;
- (id)_processedDuplicateAssetsWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 duplicateType:(short)a2 associatedDuplicateAlbum:(id *)a3 error:(id *)a4;
- (BOOL)_processedRemoveExclusionGroupAssetsWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 error:(id *)a2;
- (id)_fetchAssetsWithPhotoLibrary:(id)a0 assetObjectIDs:(id)a1 error:(id *)a2;
- (id)_fetchAssetOIDsForPhotoLibrary:(id)a0 error:(id *)a1;
- (BOOL)_moveDuplicateAlbumAssestFromAlbums:(id)a0 toTargetAlbum:(id)a1 duplicateType:(short)a2 error:(id *)a3;
- (BOOL)_insertIntoDuplicateAlbum:(id)a0 assets:(id)a1 duplicateType:(short)a2 photoLibrary:(id)a3 error:(id *)a4;
- (id)_duplicateAlbumsFromAssets:(id)a0;
- (BOOL)assetsArePendingForDuplicateMergeProcessing:(id)a0;
- (BOOL)_checkMergeFeatureEnabled:(id *)a0;
- (void)mergeDuplicateAssetsWithAssetUUIDs:(id)a0 library:(id)a1 completionHandler:(id /* block */)a2;
- (void)_cloudScopedIdentifiersFromAssetUUIDS:(id)a0 library:(id)a1 completionHandler:(id /* block */)a2;
- (id)_albumGroupingFromAssets:(id)a0 localIdentifierToCloudIdentifiers:(id)a1 library:(id)a2;
- (id)_fetchAssetsFromReference:(id)a0 library:(id)a1 error:(id *)a2;
- (BOOL)_isAssetValidForMerge:(id)a0;
- (id)_sortMergeDuplicateAssets:(id)a0 library:(id)a1 error:(id *)a2;
- (void)_inFlightMergeAssetsAddUUIDs:(id)a0;
- (void)_inFlightMergeAssetsRemoveUUIDs:(id)a0;

@end
