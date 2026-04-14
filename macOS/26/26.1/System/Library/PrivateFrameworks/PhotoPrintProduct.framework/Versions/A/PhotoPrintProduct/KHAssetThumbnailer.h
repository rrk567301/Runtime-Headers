@class KHAsset;

@interface KHAssetThumbnailer : NSOperation {
    KHAsset *_asset;
}

+ (void)queueThumbnailGenerationForAsset:(id)a0;

- (void)main;
- (id)initWithAsset:(id)a0;
- (void)dealloc;
- (id)_generateThumbForSize:(int)a0;
- (id)_thumbPathForSize:(int)a0;

@end
