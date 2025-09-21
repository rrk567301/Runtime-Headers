@class PHAssetCollection, NSString;

@interface PXPostAssetsToSharedAlbumAction : PXAssetsAction {
    PHAssetCollection *_sharedAlbum;
    NSString *_comment;
}

- (id)actionIdentifier;
- (id)presentationEnvironment;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithSharedAlbum:(id)a0 assets:(id)a1 comment:(id)a2;

@end
