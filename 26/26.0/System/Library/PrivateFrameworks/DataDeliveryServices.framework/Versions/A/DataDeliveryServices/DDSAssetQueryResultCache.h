@protocol DDSCache;

@interface DDSAssetQueryResultCache : NSObject

@property (readonly, nonatomic) id<DDSCache> cache;

- (void)clearCacheForAssetType:(id)a0;
- (void)clearCache;
- (id)cachedAssetsForQuery:(id)a0;
- (void)cacheAssets:(id)a0 forQuery:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
