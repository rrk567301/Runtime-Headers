@class NSString, NSPredicate, PXAssetsDataSource;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager>

@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderTitle;
@property (readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderMessage;
@property (readonly, copy, nonatomic) NSString *localizedLoadingInitialDataSourceMessage;
@property (readonly, nonatomic) BOOL isLoadingInitialDataSource;
@property (readonly, nonatomic) BOOL isBackgroundFetching;
@property (readonly, nonatomic) BOOL supportsFiltering;
@property (readonly, nonatomic) NSPredicate *filterPredicate;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setFilterPredicate:(id)a0;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (id)mutableChangeObject;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (void)ensureLastSectionHasContent;
- (void)ensureStartingSectionHasContent;
- (void)startBackgroundFetchIfNeeded;
- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (void)stopForceIncludingAllAssets;
- (void)excludeAssetsAtIndexPaths:(id)a0;
- (void)stopExcludingAssets:(id)a0;
- (void)refreshResultsForAssetCollection:(id)a0;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)waitForAvailabilityOfAsset:(id)a0 completionHandler:(id /* block */)a1;

@end
