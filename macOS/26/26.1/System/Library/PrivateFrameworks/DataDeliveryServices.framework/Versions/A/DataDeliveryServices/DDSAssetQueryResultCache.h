@protocol DDSCache;

@interface DDSAssetQueryResultCache : NSObject

@property (readonly, nonatomic) id<DDSCache> cache;

- (void)clearCache;
- (void)cacheAssets:(id)a0 forQuery:(id)a1;
- (id)cachedAssetsForQuery:(id)a0;
- (void).cxx_destruct;
- (void)clearCacheForAssetType:(id)a0;
- (id)init;

@end
