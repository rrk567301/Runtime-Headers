@class PHAsset;

@interface SearchUIPhotosImage : SearchUIImage

@property (retain) PHAsset *asset;
@property struct CGSize { double width; double height; } pixelSize;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (id)imageQueue;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)fetchAsset;
- (void)fetchAssetWithCompletionHandler:(id /* block */)a0;

@end
