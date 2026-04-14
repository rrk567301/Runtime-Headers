@interface PAThumbnailImageAssetClient : PAImageAssetClient

- (void)update:(BOOL)a0;
- (void)ready;
- (long long)imageOrientation;
- (void)didUpdateImage:(id)a0;
- (void)_didUpdateThumbnailImage:(id)a0;
- (void)_notifyDidLoadThumbnailImage;
- (struct CGSize { double x0; double x1; })_originalImageSize;
- (BOOL)isImageValidInCurrentROI;

@end
