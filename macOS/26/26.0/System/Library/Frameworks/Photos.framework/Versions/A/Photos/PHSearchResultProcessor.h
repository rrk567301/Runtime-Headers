@class NSAttributedString, NSSet, NSMutableDictionary, PHPhotoLibrary, NSCountedSet, NSMutableSet, NSMutableArray, PHSearchQueryOptions, CSCustomAttributeKey, _CSEmbedding;

@interface PHSearchResultProcessor : NSObject

@property (copy, nonatomic) PHSearchQueryOptions *queryOptions;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (copy, nonatomic) NSSet *scopedUUIDs;
@property (nonatomic) struct { float highPrecision; float veryHighPrecision; } embeddingThresholds;
@property (copy, nonatomic) NSAttributedString *queryStringReceivedFromSpotlight;
@property (retain, nonatomic) _CSEmbedding *queryEmbedding;
@property (nonatomic) BOOL isUnsafeQuery;
@property (retain, nonatomic) NSMutableSet *matchedPersonUUIDs;
@property (retain, nonatomic) NSMutableSet *matchedLookupIdentifiers;
@property (retain, nonatomic) NSMutableSet *matchedSceneIdentifierAndTypes;
@property (retain, nonatomic) NSMutableArray *unfilteredAssetSearchResults;
@property (retain, nonatomic) NSMutableArray *topHitAssetSearchResultCandidates;
@property (retain, nonatomic) NSMutableArray *collectionResults;
@property (retain, nonatomic) NSMutableDictionary *assetCountByCollectionUUID;
@property (retain, nonatomic) NSCountedSet *assetMatchedAlbumUUIDs;
@property (retain, nonatomic) NSCountedSet *assetMatchedMemoryUUIDs;
@property (retain, nonatomic) NSCountedSet *assetMatchedHighlightUUIDs;
@property (retain, nonatomic) NSMutableArray *assetUUIDsForSuggestions;
@property (retain, nonatomic) NSMutableArray *collectionUUIDsForSuggestions;
@property (retain, nonatomic) CSCustomAttributeKey *photosAlbumIdentifiersKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosAlbumAssetCountsKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosMemoryIdentifiersKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosMemoryAssetCountsKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosHighlightIdentifiersKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosHighlightAssetCountsKey;
@property (retain, nonatomic) CSCustomAttributeKey *photosSensitiveLocationKey;

+ (id)_embeddingLookupIdentifiersForMatchedEmbeddingIDs:(id)a0 assetEmbeddingIds:(id)a1;
+ (unsigned long long)_searchResultTypeForSpotlightSearchableItem:(id)a0;

- (void).cxx_destruct;
- (id)_rankSortedCollectionSearchResultsFromResults:(id)a0 maxResults:(unsigned long long)a1 query:(id)a2;
- (id)_collectionResultsFromAssetResultsForQuery:(id)a0;
- (id)_collectionResultsFromAssetResultsForResultType:(unsigned long long)a0 query:(id)a1;
- (id)_matchTypeFilteredResultsForResults:(id)a0 query:(id)a1;
- (id)_popResultsFromResults:(id)a0 popCount:(unsigned long long)a1;
- (void)_processSpotlightItem:(id)a0;
- (id)_rankSortedAssetSearchResultsFromResults:(id)a0 maxResults:(unsigned long long)a1 query:(id)a2;
- (void)finalizeResultsForQuery:(id)a0 resultHandler:(id /* block */)a1;
- (id)initWithSearchQueryOptions:(id)a0 scopedUUIDs:(id)a1 photoLibrary:(id)a2;
- (void)processSpotlightComputedAttribute:(id)a0 values:(id)a1;
- (void)processSpotlightItems:(id)a0;
- (void)setSpotlightAttributedQuery:(id)a0;

@end
