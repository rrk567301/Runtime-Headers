@class PHCachingImageManager, PHFetchResult, PHFetchOptions, CNAvatarPickerPhotoAssetCollection;

@interface CNAvatarPickerPhotoProvider : NSObject

@property (retain, nonatomic) PHFetchOptions *fetchOptions;
@property (retain, nonatomic) PHFetchResult *allPhotos;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (retain, nonatomic) PHFetchResult *allFavorites;
@property (retain, nonatomic) PHFetchResult *allShared;
@property (retain, nonatomic) PHFetchResult *allAlbums;
@property (retain, nonatomic) PHFetchResult *favoritesCollection;
@property (retain, nonatomic) PHFetchResult *sharedCollection;
@property (retain, nonatomic) PHFetchResult *albumsCollection;
@property (nonatomic) int maxResImageRequest;
@property (nonatomic) long long activeCollectionType;
@property (retain, nonatomic) CNAvatarPickerPhotoAssetCollection *activeSubCollection;
@property (copy, nonatomic) id /* block */ allPhotosFetchCompletion;

- (id)init;
- (void).cxx_destruct;
- (long long)imageCount;
- (long long)subCollectionCount;
- (id)subCollectionAtIndex:(long long)a0;
- (void)imageForType:(long long)a0 atIndex:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 resultHandler:(id /* block */)a3;
- (void)imageForSubCollection:(id)a0 atIndex:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 resultHandler:(id /* block */)a3;
- (void)imageForType:(long long)a0 atIndex:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 useMaxSize:(BOOL)a3 resultHandler:(id /* block */)a4 progressHandler:(id /* block */)a5;
- (void)imageForSubCollection:(id)a0 atIndex:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 useMaxSize:(BOOL)a3 resultHandler:(id /* block */)a4 progressHandler:(id /* block */)a5;
- (void)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 useMaxSize:(BOOL)a2 resultHandler:(id /* block */)a3 progressHandler:(id /* block */)a4;
- (id)allFetchedObjectIDsInCollections:(id)a0;

@end
