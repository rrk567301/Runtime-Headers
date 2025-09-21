@interface PXLikeSharedAlbumAssetsAction : PXAssetsAction

@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic, getter=isLike) char like;

+ (char)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (char)currentValueForAssets:(id)a0;
+ (char)toggledValueForAssets:(id)a0;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)a0 like:(char)a1;
- (void)markAssetsAsLiked:(char)a0 completionHandler:(id /* block */)a1;

@end
