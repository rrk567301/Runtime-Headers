@class SFPhotosAlbumImage;

@interface SearchUIPhotosAlbumImage : SearchUIPhotosImage

@property (retain) SFPhotosAlbumImage *sfImage;

- (id)fetchAsset;
- (void)fetchAssetWithCompletionHandler:(id /* block */)a0;

@end
