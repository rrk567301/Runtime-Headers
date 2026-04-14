@class NSNumber, NSString;

@interface KHAssetVersion : KHModel {
    NSNumber *_assetId;
    NSString *_key;
    NSString *_path;
}

- (void)cachePath:(id)a0;
- (void)setPath:(id)a0;
- (void)cacheKey:(id)a0;
- (void)dealloc;
- (id)path;
- (id)assetId;
- (void)setKey:(id)a0;
- (id)key;
- (void)setAssetId:(id)a0;
- (void)cacheAssetId:(id)a0;

@end
