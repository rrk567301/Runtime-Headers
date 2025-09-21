@class PHAssetCollection, PHAsset;

@interface PXMakeKeyAssetAction : PXPhotosAction

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHAsset *redoKeyAsset;
@property (readonly, nonatomic) PHAsset *undoKeyAsset;

- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1;

@end
