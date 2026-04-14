@protocol DDSCache;

@interface DDSAssetQueryResultCache : NSObject

@property (readonly, nonatomic) id<DDSCache> cache;

- (void)clearCacheForAssetType:(id)a0;
- (id)cachedAssetsForQuery:(id)a0;
- (void)clearCache;
- (void).cxx_destruct;
- (id)init;
- (void)cacheAssets:(id)a0 forQuery:(id)a1;

@end
