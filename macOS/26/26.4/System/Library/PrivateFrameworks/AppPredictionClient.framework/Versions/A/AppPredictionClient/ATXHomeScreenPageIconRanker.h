@class ATXHomeScreenConfigCache;

@interface ATXHomeScreenPageIconRanker : NSObject {
    ATXHomeScreenConfigCache *_cache;
}

- (id)initWithCache:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_pageForPageIndex:(unsigned long long)a0;
- (id)iconIndexesInAscendingOrderOfHistoricalUsageForPageIndex:(unsigned long long)a0;

@end
