@class PHAsset;

@interface PAItem : NSObject

@property (retain) PHAsset *asset;

+ (id)itemForAsset:(id)a0;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (void)assetDidChange:(id)a0;

@end
