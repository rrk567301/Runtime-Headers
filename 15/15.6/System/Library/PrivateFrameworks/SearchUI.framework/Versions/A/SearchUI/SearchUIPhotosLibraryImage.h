@class PHAsset, SFPhotosLibraryImage, PHFetchResult;

@interface SearchUIPhotosLibraryImage : SearchUIImage

@property (retain) SFPhotosLibraryImage *sfImage;
@property (retain) PHAsset *asset;
@property (retain) PHFetchResult *fetchResult;
@property struct CGSize { double width; double height; } pixelSize;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (id)photoIdentifier;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(char)a1 completionHandler:(id /* block */)a2;
- (char)supportsFastPathShadow;
- (id)fetchAsset;
- (void)rejectPerson:(id)a0;

@end
