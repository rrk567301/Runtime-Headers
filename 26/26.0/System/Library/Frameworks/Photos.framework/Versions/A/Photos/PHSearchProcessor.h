@class CSCustomAttributeKey;

@interface PHSearchProcessor : NSObject

@property (retain, nonatomic) CSCustomAttributeKey *photosAlbumIdentifiersKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosAlbumAssetCountsKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosMemoryIdentifiersKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosMemoryAssetCountsKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosHighlightIdentifiersKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosHighlightAssetCountsKey;

+ (id)_albumUUIDsFromAssetBasedSearchResults:(id)a0;
+ (id)_collectionUUIDsForSpotlightSearchableItem:(id)a0 identifiersKey:(id)a1 countsKey:(id)a2 assetCountByCollectionUUID:(id)a3;
+ (id)_embeddingLookupIdentifiersForMatchedEmbeddingIDs:(id)a0 assetEmbeddingIds:(id)a1;
+ (id)_filterResultsByMatchType:(id)a0 forQuery:(id)a1 highPrecisionEmbeddingDistanceThreshold:(float)a2 veryHighPrecisionEmbeddingDistanceThreshold:(float)a3;
+ (id)_highlightUUIDsFromAssetBasedSearchResults:(id)a0;
+ (id)_memoryUUIDsFromAssetBasedSearchResults:(id)a0;
+ (id)_pHSearchSuggestionFromPLSearchSuggestion:(id)a0 rangeOfSuggestionText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)_popResultsFromResults:(id)a0 popCount:(unsigned long long)a1;
+ (id)_rankedAssetSearchResultsFromResults:(id)a0 maxResults:(unsigned long long)a1 queryId:(int)a2 batchId:(int)a3;
+ (id)_rankedCollectionSearchResultsFromResults:(id)a0 maxResults:(unsigned long long)a1 queryId:(int)a2 batchId:(int)a3;
+ (id)_removeTransientProcessingStateForSearchResults:(id)a0;
+ (unsigned long long)_searchResultTypeForSpotlightSearchableItem:(id)a0;
+ (id)searchResultsFromAssetUUIDs:(id)a0;
+ (void)searchSuggestionsFromPLSearchSuggestions:(id)a0 suggestions:(out id *)a1 queryId:(int)a2 batchId:(int)a3 rangeOfSuggestionText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

- (id)init;
- (void).cxx_destruct;
- (id)_searchResultFromSpotlightSearchableItem:(id)a0 queryOptions:(id)a1 matchedLookupIdentifiers:(id)a2 assetCountByCollectionUUID:(id)a3;
- (void)searchResultsFromSpotlightSearchableItems:(id)a0 query:(id)a1 annotatedQueryString:(id)a2 searchResults:(out id *)a3 unfilteredAssetSearchResults:(out id *)a4 rankedAssetSearchResults:(out id *)a5 rankedCollectionSearchResults:(out id *)a6 assetUUIDsForSuggestions:(out id *)a7 collectionUUIDsForSuggestions:(out id *)a8 highPrecisionEmbeddingDistanceThreshold:(float)a9 veryHighPrecisionEmbeddingDistanceThreshold:(float)a10 scopedUUIDs:(id)a11 matchedLookupIdentifiers:(id)a12;

@end
