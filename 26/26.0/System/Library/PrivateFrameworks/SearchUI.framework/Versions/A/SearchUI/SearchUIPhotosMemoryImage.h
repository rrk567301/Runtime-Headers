@class SFPhotosMemoryImage;

@interface SearchUIPhotosMemoryImage : SearchUIPhotosImage

@property (retain) SFPhotosMemoryImage *sfImage;

- (id)fetchAsset;
- (void)fetchAssetWithCompletionHandler:(id /* block */)a0;

@end
