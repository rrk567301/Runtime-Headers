@class PXUpdater, NSDictionary, NSSet, PXAssetsDataSourceManager, PXAssetsDataSource, NSString;
@protocol NSCopying;

@interface PXSwitchableAssetsDataSourceManager : PXAssetsDataSourceManager <PXAssetsDataSourceManagerObserver>

@property (readonly, nonatomic) NSDictionary *dataSourceManagerByKey;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSSet *allKeys;
@property (retain, nonatomic) id<NSCopying> currentDataSourceKey;
@property (retain, nonatomic) PXAssetsDataSource *currentDataSource;
@property (copy, nonatomic) id<NSCopying> currentKey;
@property (readonly, nonatomic) PXAssetsDataSourceManager *currentDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)a0;
- (id)filterPredicate;
- (void)setFilterPredicate:(id)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)a0;
- (void)assetsDataSourceManagerDidFinishLoadingInitialDataSource:(id)a0;
- (id)createInitialDataSource;
- (void)didPerformChanges;
- (void)ensureStartingSectionHasContent;
- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (void)_enumerateAllDataSourceManagers:(id /* block */)a0;
- (void)_invalidateCurrentDataSource;
- (void)_updateCurrentDataSource;
- (long long)backgroundFetchOriginSection;
- (id)createDataSourceManagerForAsset:(id)a0;
- (id)createDataSourceManagerForAssetsInSectionOfAsset:(id)a0;
- (id)dataSourceManagerForKey:(id)a0;
- (void)ensureLastSectionHasContent;
- (void)excludeAssetsAtIndexPaths:(id)a0;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (id)initWithDataSourceManagerByKey:(id)a0 currentKey:(id)a1;
- (BOOL)isBackgroundFetching;
- (BOOL)isLoadingInitialDataSource;
- (id)localizedEmptyPlaceholderAttributedMessage;
- (id)localizedEmptyPlaceholderTitle;
- (id)localizedLoadingInitialDataSourceMessage;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)refreshResultsForAssetCollection:(id)a0;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)setBackgroundFetchOriginSection:(long long)a0;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)setCurationEnabledForAllCollections:(BOOL)a0 collectionsToDiff:(id)a1;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;
- (id)sharedLibraryStatusProvider;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)a0;
- (void)stopForceIncludingAllAssets;
- (BOOL)supportsCurationToggling;
- (BOOL)supportsFiltering;
- (void)waitForAvailabilityOfAsset:(id)a0 completionHandler:(id /* block */)a1;

@end
