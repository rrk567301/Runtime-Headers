@class ATXHomeScreenConfigCache;

@interface ATXHomeScreenPageIconRanker : NSObject {
    ATXHomeScreenConfigCache *_cache;
}

- (void).cxx_destruct;
- (id)initWithCache:(id)a0;
- (id)init;
- (id)_pageForPageIndex:(unsigned long long)a0;
- (id)iconIndexesInAscendingOrderOfHistoricalUsageForPageIndex:(unsigned long long)a0;

@end
