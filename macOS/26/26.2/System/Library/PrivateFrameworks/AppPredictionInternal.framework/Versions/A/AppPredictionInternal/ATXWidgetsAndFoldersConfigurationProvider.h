@class ATXHomeScreenConfigCache, NSArray;

@interface ATXWidgetsAndFoldersConfigurationProvider : NSObject {
    ATXHomeScreenConfigCache *_cache;
    NSArray *_pages;
    NSArray *_homePageFolders;
}

- (void).cxx_destruct;
- (id)init;
- (void)cacheHomeScreenConfigurationsIfNecessary;
- (unsigned long long)globalAllPagesFolderCount;
- (unsigned long long)globalAllPagesWidgetCount;
- (unsigned long long)homePageFolderCountBucket;
- (unsigned long long)homePageWidgetCountBucket;

@end
