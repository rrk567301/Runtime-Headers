@class NSArray, PHFetchResult, PHAssetCollection;

@interface PXImportFilesAction : PXPhotosAction <PHImportServiceImporterDelegate> {
    NSArray *_fileURLs;
    PHAssetCollection *_assetCollection;
    NSArray *_importedAssetsIdentifiers;
    PHFetchResult *_importedAssets;
}

@property (readonly, nonatomic) PHFetchResult *importedAssets;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (void)completedImportRecord:(id)a0;
- (long long)importAsset:(id)a0 asDuplicateOfLibraryAsset:(id)a1 applyToAll:(BOOL *)a2;
- (id)actionNameLocalizationKey;
- (id)initWithPhotoLibrary:(id)a0 fileURLs:(id)a1 assetCollection:(id)a2;

@end
