@class NSPredicate, NSArray;

@interface PXConcatenatingAssetsDataSourceManager : PXAssetsDataSourceManager <PXAssetsDataSourceManagerObserver> {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ dataSourceManagers;
}

@property (nonatomic, retain) NSPredicate *filterPredicate;
@property (nonatomic) BOOL includeOthersInSocialGroupAssets;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (nonatomic) BOOL reverseSortOrder;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)createInitialDataSource;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (id)initWithDataSourceManagers:(id)a0 mode:(long long)a1;
- (BOOL)isReverseSortOrder;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)refreshResultsForAssetCollection:(id)a0;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)setAllowedUUIDs:(id)a0;
- (void)setAllowedUUIDs:(id)a0 manualOrderUUIDs:(id)a1 forAssetCollections:(id)a2;
- (void)setAllowedUUIDs:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)setCurationEnabledForAllCollections:(BOOL)a0 curationLength:(long long)a1 collectionsToDiff:(id)a2;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)setIncludeOthersInSocialGroupAssets:(BOOL)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)startBackgroundFetchIfNeeded;
- (void)stopExcludingAssets:(id)a0;
- (void)stopForceIncludingAllAssets;

@end
