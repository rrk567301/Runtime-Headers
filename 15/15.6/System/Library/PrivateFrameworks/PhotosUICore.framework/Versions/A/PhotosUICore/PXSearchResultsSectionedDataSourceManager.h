@class PHCachingImageManager, PXSearchActiveSearch, NSDictionary, NSString, PXSearchResultsSectionedDataSource, PSIDatabase;
@protocol PXSearchResultsSectionedDataSourceChangeObserver;

@interface PXSearchResultsSectionedDataSourceManager : NSObject <PXSearchResultsSectionedDataSourceChangeObserver>

@property (retain, nonatomic) PHCachingImageManager *cachingImageManager;
@property (retain, nonatomic) PSIDatabase *psiSearchIndex;
@property (retain, nonatomic) PXSearchResultsSectionedDataSource *searchResultsDataSource;
@property (nonatomic) char isIndexingPaused;
@property (nonatomic) unsigned long long itemsRemainingCount;
@property (retain, nonatomic) PXSearchActiveSearch *activeSearch;
@property (readonly, nonatomic) char resultsReady;
@property (readonly) NSDictionary *debugDictionary;
@property (weak, nonatomic) id<PXSearchResultsSectionedDataSourceChangeObserver> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSearchSectionedDataSource:(id)a0;
- (void)mergePendingChanges;
- (void)prepareDataSourceWithCompletion:(id /* block */)a0;
- (char)queryHasChanged:(id)a0 maxSuggestionCount:(long long)a1;
- (void)searchResultsDataSource:(id)a0 didChangeThumbnailAssetsForSearchResult:(id)a1 atIndexes:(id)a2;
- (void)searchResultsDataSource:(id)a0 didChangeThumbnailAssetsForSearchResult:(id)a1 topAssetsSectionExists:(char)a2;
- (void)searchResultsDataSource:(id)a0 didFetchAssetsForSearchResult:(id)a1 indexPath:(id)a2;
- (void)searchResultsDataSourceHasPendingChanges:(id)a0 shouldMergePendingChanges:(char)a1;

@end
