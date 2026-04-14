@interface PXFakePhotoKitAssetsFetcher : NSObject

@property (class, nonatomic, readonly) PXFakePhotoKitAssetsFetcher *defaultFetcher;

+ (void)fillLibraryWithFakeAssets:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (id)fetchAssetsInContainer:(id)a0 curationKind:(long long)a1;

@end
