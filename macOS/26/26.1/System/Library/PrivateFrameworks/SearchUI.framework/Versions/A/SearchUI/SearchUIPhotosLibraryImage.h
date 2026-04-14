@class SFPhotosLibraryImage;

@interface SearchUIPhotosLibraryImage : SearchUIPhotosImage

@property (retain) SFPhotosLibraryImage *sfImage;

- (BOOL)hasMultipleRepresentations;
- (BOOL)supportsFastPathShadow;
- (id)fetchAsset;
- (void)fetchAssetWithCompletionHandler:(id /* block */)a0;
- (void)rejectPerson:(id)a0;

@end
