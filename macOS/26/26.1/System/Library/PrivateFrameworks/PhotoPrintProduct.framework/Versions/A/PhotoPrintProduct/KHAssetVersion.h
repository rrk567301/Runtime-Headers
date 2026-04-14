@class NSNumber, NSString;

@interface KHAssetVersion : KHModel {
    NSNumber *_assetId;
    NSString *_key;
    NSString *_path;
}

- (void)cachePath:(id)a0;
- (void)cacheKey:(id)a0;
- (void)setPath:(id)a0;
- (id)key;
- (id)path;
- (id)assetId;
- (void)dealloc;
- (void)setKey:(id)a0;
- (void)setAssetId:(id)a0;
- (void)cacheAssetId:(id)a0;

@end
