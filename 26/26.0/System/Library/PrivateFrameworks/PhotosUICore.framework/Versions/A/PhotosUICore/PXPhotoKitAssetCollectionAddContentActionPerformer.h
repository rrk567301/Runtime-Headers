@protocol PXFastEnumeration;

@interface PXPhotoKitAssetCollectionAddContentActionPerformer : PXPhotoKitAssetCollectionActionPerformer {
    id<PXFastEnumeration> _content;
}

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (BOOL)_isAddingToSharedAlbum;
- (void)_performAddAssets:(id /* block */)a0;
- (void)_performAddSharedAlbumAssets:(id)a0;
- (void)_performMergeAssetCollections:(id /* block */)a0;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 parameters:(id)a2;

@end
