@protocol DDSCache;

@interface DDSAssetQueryResultCache : NSObject

@property (readonly, nonatomic) id<DDSCache> cache;

- (void)clearCache;
- (void)clearCacheForAssetType:(id)a0;
- (id)cachedAssetsForQuery:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cacheAssets:(id)a0 forQuery:(id)a1;

@end
