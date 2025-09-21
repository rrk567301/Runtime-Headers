@class NSSet, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface PHSearchQueryOptions : NSObject <NSCopying>

@property (nonatomic) char limitSuggestionsToExactTextMatches;
@property (nonatomic) char fastRanking;
@property (nonatomic) double embeddingRelevanceThreshold;
@property (nonatomic) char disableU2;
@property (nonatomic) long long embeddingGenerationTimeout;
@property (nonatomic) char disableSafetyCheck;
@property (nonatomic) char enableQueryUnderstandingGenericLocations;
@property (nonatomic) double collectionThreshold;
@property (nonatomic) unsigned long long matchType;
@property (nonatomic) unsigned long long minNumberOfResultsForNextTokenGeneration;
@property (nonatomic) char enableEmbeddingOnlyResultsInExactMatches;
@property (nonatomic) double spotlightQueryTimeout;
@property (nonatomic) unsigned long long searchQueryResultTypes;
@property (retain, nonatomic) NSSet *scopedIdentifiers;
@property (nonatomic) long long maxRankedAssetSearchResults;
@property (nonatomic) long long maxRankedCollectionSearchResults;
@property (nonatomic) char disableSemanticSearch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultsHandlerQueue;
@property (nonatomic) char disableMetadataSearch;
@property (nonatomic) char enableQueryMatchDetails;
@property (nonatomic) long long maxSearchResults;
@property (nonatomic) char excludeOCRTextResultMatches;
@property (nonatomic) char enableQueryUnderstanding;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long suggestionLimit;
@property (nonatomic) char enableNextTokenSuggestions;
@property (nonatomic) unsigned long long locationInQueryStringForSuggestionGeneration;
@property (nonatomic) char enableResultRanking;
@property (nonatomic) unsigned long long completionSuggestionLimit;
@property (nonatomic) unsigned long long nextEntitySuggestionLimit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)_rankingModeDescription;

@end
