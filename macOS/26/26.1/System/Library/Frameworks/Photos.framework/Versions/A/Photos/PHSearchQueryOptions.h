@class NSArray, NSSet, NSIndexSet, NSObject;
@protocol OS_dispatch_queue;

@interface PHSearchQueryOptions : NSObject <NSCopying>

@property (nonatomic) BOOL limitSuggestionsToExactTextMatches;
@property (nonatomic) double embeddingRelevanceThreshold;
@property (nonatomic) BOOL disableU2;
@property (nonatomic) long long embeddingGenerationTimeout;
@property (nonatomic) BOOL disableSafetyCheck;
@property (nonatomic) double collectionThreshold;
@property (nonatomic) unsigned long long matchType;
@property (nonatomic) unsigned long long minNumberOfResultsForNextTokenGeneration;
@property (nonatomic) BOOL enableEmbeddingOnlyResultsInExactMatches;
@property (nonatomic) double spotlightQueryTimeout;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) NSArray *filterQueries;
@property (nonatomic) unsigned long long searchQueryResultTypes;
@property (retain, nonatomic) NSSet *scopedIdentifiers;
@property (nonatomic) long long maxRankedAssetSearchResults;
@property (nonatomic) long long maxRankedCollectionSearchResults;
@property (nonatomic) BOOL disableSemanticSearch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultsHandlerQueue;
@property (nonatomic) BOOL disableMetadataSearch;
@property (nonatomic) BOOL enableQueryMatchDetails;
@property (nonatomic) long long maxSearchResults;
@property (nonatomic) BOOL fetchContextualThumbnails;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long spotlightQUTypes;
@property (nonatomic) unsigned long long suggestionLimit;
@property (nonatomic) BOOL enableNextTokenSuggestions;
@property (nonatomic) unsigned long long locationInQueryStringForSuggestionGeneration;
@property (retain, nonatomic) NSIndexSet *substringMatchedCategories;

+ (id)queryOptionsForSyndicationLibraryWithOptions:(id)a0;

- (void)setFilterQueries:(id)a0;
- (id)jsonDictionary;
- (void)setBundleIdentifiers:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_rankingModeDescription;

@end
