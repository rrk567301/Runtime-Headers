@class NSString;

@interface ATXSuggestedPagesCache : NSObject {
    NSString *_basePath;
}

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_cacheForPageType:(long long)a0;
- (void)cacheSuggestedPages:(id)a0 forPageType:(long long)a1;
- (id)cachedSuggestedPagesForPageType:(long long)a0;
- (void)evictCachedSuggestedPages;
- (void)printCachedSuggestedPagesStats;

@end
