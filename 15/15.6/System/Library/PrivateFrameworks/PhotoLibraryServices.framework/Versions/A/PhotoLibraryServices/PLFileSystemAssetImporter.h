@class PLPhotoLibrary, NSMutableDictionary, NSMutableSet, PLLibraryServicesManager, NSString, NSMutableIndexSet;

@interface PLFileSystemAssetImporter : NSObject {
    PLPhotoLibrary *_photoLibrary;
    PLLibraryServicesManager *_libraryServicesManager;
    NSString *_libraryBundlePath;
    NSString *_photoLibraryStoreUUID;
    NSMutableIndexSet *_thumbIndexes;
    char _hasProcessedAnyAssets;
}

@property (nonatomic) unsigned long long thumbnailBatchFetchSize;
@property (retain, nonatomic) NSMutableSet *existingUUIDs;
@property (retain, nonatomic) NSMutableDictionary *existingUUIDsByUppercasePath;
@property (retain, nonatomic) NSMutableDictionary *existingOIDsByUUID;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_setupPhotoAssetAsPhotoIrisIfNeeded:(id)a0 hasVideoComplementResource:(char)a1;
- (id)_addAssetWithURL:(id)a0 existingOID:(id)a1 assetUUID:(id)a2 isPlaceholder:(char)a3;
- (id)_assetAdjustmentsIfExistsForAsset:(id)a0;
- (char)_setupAdjustmentsFromAdjustmentFileForAsset:(id)a0;
- (char)_setupPhotoAsset:(id)a0 withURL:(id)a1 isPlaceholder:(char)a2 hasVideoComplementResource:(char)a3;
- (char)_setupPhotoAsset:(id)a0 withURL:(id)a1 unknownType:(char)a2 isPlaceholder:(char)a3 hasVideoComplementResource:(char)a4;
- (char)_setupUnknownAsset:(id)a0 withURL:(id)a1;
- (char)_setupVideoAsset:(id)a0 withURL:(id)a1;
- (id)addAssetWithURLs:(id)a0 assetPayload:(id)a1 forceInsert:(char)a2 forceUpdate:(char)a3 fixAddedDate:(char)a4;
- (void)addAvailableThumbnailIndex:(unsigned long long)a0;
- (id)assetURLisInDatabase:(id)a0 deferredPreviewURL:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 libraryServicesManager:(id)a1;
- (id)libraryBundlePathWithPhotoLibrary:(id)a0;
- (unsigned long long)nextThumbnailIndex;
- (void)setModificationAndCreationDateOnAsset:(id)a0 withURL:(id)a1;

@end
