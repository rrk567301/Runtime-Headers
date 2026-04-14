@class NSNumber, NSString;

@interface KHAssetVersion : KHModel {
    NSNumber *_assetId;
    NSString *_key;
    NSString *_path;
}

- (void)cachePath:(id)a0;
- (id)key;
- (void)setPath:(id)a0;
- (id)path;
- (id)assetId;
- (void)setKey:(id)a0;
- (void)dealloc;
- (void)cacheKey:(id)a0;
- (void)setAssetId:(id)a0;
- (void)cacheAssetId:(id)a0;

@end
