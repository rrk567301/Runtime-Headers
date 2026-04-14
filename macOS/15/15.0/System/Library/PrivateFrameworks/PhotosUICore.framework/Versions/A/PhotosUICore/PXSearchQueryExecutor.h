@class PSIQuery, PXSearchQueryResultsProcessor, PLSearchProcessor, PHPhotoLibrary, NSDictionary, PXSearchQuery, NSObject, PLEmbeddingQuery;
@protocol OS_dispatch_queue;

@interface PXSearchQueryExecutor : NSObject

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) id /* block */ resultsHandler;
@property (retain, nonatomic) PXSearchQueryResultsProcessor *searchResultsProcessor;
@property (readonly, nonatomic) PLSearchProcessor *plSearchProcessor;
@property (copy, nonatomic) PXSearchQuery *currentSearchQuery;
@property (retain, nonatomic) PSIQuery *currentPSIQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSDictionary *sceneAncestryInformation;
@property (readonly, nonatomic) BOOL requestSceneAncestryInformation;
@property (copy, nonatomic) PLEmbeddingQuery *currentEmbeddingQuery;

+ (BOOL)_sectionIsHighlightsSection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)psiSearchIndex;
- (void)_executePhotosIndexSearchQuery:(id)a0;
- (id)_backendQueryFromSearchQuery:(id)a0;
- (void)_executeEmbeddingsSearchQuery:(id)a0 embeddingTypes:(id)a1 searchQuery:(id)a2;
- (id)_limitedSearchSuggestions:(id)a0 limit:(unsigned long long)a1;
- (void)_processedQueryResultsForSearchQuery:(id)a0 psiQuery:(id)a1 assetResults:(id)a2 assetResultsForCompletions:(id)a3 collectionResults:(id)a4 topAssetsResult:(id)a5 topCollectionResults:(id)a6 plSearchSuggestions:(id)a7;
- (void)_requestSceneAncestryInformation;
- (id)_searchSuggestionsFromPSIQuery:(id)a0 searchSections:(id)a1 suggestionLimit:(unsigned long long)a2;
- (void)_setupSearchResultsProcessor;
- (void)executeSearchQuery:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 requestSceneAncestryInformation:(BOOL)a1 resultsHandler:(id /* block */)a2;

@end
