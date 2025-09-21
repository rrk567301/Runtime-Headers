@class PHAssetCollection, NSArray, NSString;

@interface PXPostFilesToSharedAlbumAction : PXPhotosAction {
    PHAssetCollection *_sharedAlbum;
    NSArray *_fileURLs;
    NSString *_comment;
}

- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithSharedAlbum:(id)a0 fileURLs:(id)a1 comment:(id)a2;

@end
