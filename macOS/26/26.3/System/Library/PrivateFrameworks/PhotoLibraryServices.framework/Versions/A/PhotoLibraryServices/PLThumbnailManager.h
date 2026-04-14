@class PLLazyObject, NSPersistentStore, NSMutableSet, NSLock, NSMutableArray;

@interface PLThumbnailManager : PLThumbnailManagerCore {
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    NSLock *_fixLock;
    BOOL _shouldRebuildThumbnails;
    BOOL _didCheckShouldRebuildThumbnails;
    BOOL _hasExceededThumbnailRebuildRequestLimit;
    BOOL _isRebuildingThumbnails;
    NSPersistentStore *_migrationStore;
    PLLazyObject *_slowPersistenceManagers;
}

@property (retain, nonatomic) id observerToken;

+ (BOOL)hasRebuildingThumbnailsIndicatorAndRebuildingWithPathManager:(id)a0;
+ (id)thumbnailIdentifierWithAssetUUID:(id)a0 directory:(id)a1 filename:(id)a2 bundleScope:(unsigned short)a3 pathManager:(id)a4;
+ (id)masterThumbFilename;
+ (id)_thumbnailRebuildIndicatorPathWithPathManager:(id)a0;

- (void)removeRebuildThumbnailsRequest:(const char *)a0;
- (void)_recordRebuildThumbnailsAttempt;
- (void)rebuildAllMissingThumbnailsInLibrary:(id)a0;
- (id)newSlowPersistenceManagers;
- (BOOL)setThumbnailsForThumbIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 assetUUID:(id)a2 kind:(short)a3 extension:(id)a4 withImage:(id)a5;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)a0 library:(id)a1 error:(id *)a2;
- (id)dataForPhoto:(id)a0 format:(unsigned short)a1 allowPlaceholder:(BOOL)a2 width:(int *)a3 height:(int *)a4 bytesPerRow:(int *)a5 dataWidth:(int *)a6 dataHeight:(int *)a7 imageDataOffset:(int *)a8;
- (BOOL)resetThumbnailsWithResetType:(long long)a0 deferHintChanges:(BOOL)a1 inContext:(id)a2;
- (BOOL)hasRebuildThumbnailsRequest;
- (id)indexStatisticsForLibrary:(id)a0;
- (long long)removeAllThumbnailsInContextForUrgentCacheDeleteRequest:(id)a0 dryRun:(BOOL)a1 count:(unsigned long long *)a2;
- (void)discardCachedThumbnailDownscalerContexts;
- (void)deleteThumbnailsWithIdentifier:(id)a0 orIndex:(unsigned long long)a1 uuid:(id)a2;
- (BOOL)_thumbnailLoadingAssetIsHiddenOrTrashed:(id)a0;
- (id)placeholderDataForFormat:(unsigned short)a0 photoImageSize:(struct CGSize { double x0; double x1; })a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 imageDataOffset:(int *)a7;
- (id)thumbManagerForFormatID:(unsigned short)a0;
- (void)preheatThumbnailDataWithFormat:(unsigned short)a0 thumbnailIndexes:(id)a1;
- (id)thumbnailJPEGPathForPhoto:(id)a0;
- (BOOL)hasMissingThumbnailsInLibrary:(id)a0;
- (id)imageTableForFormat:(unsigned short)a0 readOnly:(BOOL)a1;
- (BOOL)isRebuildingThumbnails;
- (id)_missingThumbnailPredicate;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0;
- (id)_tableDescriptions;
- (id)imageTableForFormat:(unsigned short)a0;
- (void)removeObsoleteMetadata;
- (BOOL)hasExceededRebuildThumbnailRequestLimit;
- (BOOL)resetThumbnailsForced:(BOOL)a0 isMissingTables:(BOOL)a1 inContext:(id)a2;
- (BOOL)_performUncompressedTableDownscaleIntoDatas:(id)a0 image:(id)a1 assetUUID:(id)a2;
- (void)continueRebuildingTableThumbsInLibrary:(id)a0;
- (id)thumbManagerForFormatID:(unsigned short)a0 readOnly:(BOOL)a1;
- (id)_contextForConfigurationChanges;
- (void).cxx_destruct;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (void)dealloc;
- (struct CGImage { } *)newImageForAsset:(id)a0 format:(id)a1;
- (id)_dataForAsset:(id)a0 format:(unsigned short)a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 imageDataOffset:(int *)a7 imageDataFormat:(unsigned short *)a8;
- (unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)a0;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0 withToken:(id)a1;
- (BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)a0 thumbnailIndex:(unsigned long long)a1 image:(id)a2 assetUUID:(id)a3;
- (void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)a0;
- (void)setThumbnailsForAsset:(id)a0 withImage:(id)a1;
- (void)addRebuildThumbnailsRequest;
- (BOOL)wantsTableOnlyRebuild;
- (void)_removeMasterThumbDirectoriesWithFileManagerDelegate:(id)a0;
- (long long)_diskFootprintOfTableThumbnailTables;
- (id)initWithPhotoLibraryPathManager:(id)a0 storeFromMigration:(id)a1;
- (id)_rebuildThumbnailsQueue;
- (void)reStampConfigAsNeedingTableThumbMigration;

@end
