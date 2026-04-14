@interface PAThumbnailImageAssetClient : PAImageAssetClient

- (void)ready;
- (void)update:(BOOL)a0;
- (long long)imageOrientation;
- (struct CGSize { double x0; double x1; })_originalImageSize;
- (void)didUpdateImage:(id)a0;
- (void)_didUpdateThumbnailImage:(id)a0;
- (void)_notifyDidLoadThumbnailImage;
- (BOOL)isImageValidInCurrentROI;

@end
