@interface PAThumbnailImageAssetClient : PAImageAssetClient

- (void)ready;
- (void)update:(BOOL)a0;
- (long long)imageOrientation;
- (void)didUpdateImage:(id)a0;
- (void)_didUpdateThumbnailImage:(id)a0;
- (void)_notifyDidLoadThumbnailImage;
- (struct CGSize { double x0; double x1; })_originalImageSize;
- (BOOL)isImageValidInCurrentROI;

@end
