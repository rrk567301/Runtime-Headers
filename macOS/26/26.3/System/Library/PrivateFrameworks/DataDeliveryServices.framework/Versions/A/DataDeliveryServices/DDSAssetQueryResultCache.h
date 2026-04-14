@protocol DDSCache;

@interface DDSAssetQueryResultCache : NSObject

@property (readonly, nonatomic) id<DDSCache> cache;

- (void)clearCacheForAssetType:(id)a0;
- (void)cacheAssets:(id)a0 forQuery:(id)a1;
- (id)init;
- (void)clearCache;
- (void).cxx_destruct;
- (id)cachedAssetsForQuery:(id)a0;

@end
