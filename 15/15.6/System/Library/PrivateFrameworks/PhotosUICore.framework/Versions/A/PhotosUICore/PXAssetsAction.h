@protocol PXFastEnumeration;

@interface PXAssetsAction : PXPhotosAction {
    id<PXFastEnumeration> _assets;
}

+ (char)canPerformOnAllAssets:(id)a0;
+ (char)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (id)assets;
- (id)initWithPhotoLibrary:(id)a0;
- (id)initWithAssets:(id)a0;
- (void)performAssetChanges:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
