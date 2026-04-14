@class SFPhotosMemoryImage;

@interface SearchUIPhotosMemoryImage : SearchUIPhotosImage

@property (retain) SFPhotosMemoryImage *sfImage;

- (id)debugIdentifier;
- (id)fetchAsset;
- (void)fetchAssetWithCompletionHandler:(id /* block */)a0;

@end
