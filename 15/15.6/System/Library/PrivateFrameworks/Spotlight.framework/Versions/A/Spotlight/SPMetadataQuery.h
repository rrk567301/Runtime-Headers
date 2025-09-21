@class NSData, NSString, NSArray, SPKResponse, PRSRankingItemRanker, NSMutableDictionary, NSDictionary, NSObject, SPMetadataPattern, NSMutableArray, NSMapTable, CSFilesSearchQuery;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SPMetadataQuery : SPKQuery {
    NSString *_queryString;
    NSDictionary *_NLPRankingTerms;
    int _performanceFeedbackCount;
    NSMutableDictionary *_performanceFeedbackResults;
    NSDictionary *_nlpQueryCategoryPreference;
    NSString *_nlpQueryConfidence;
    id _queryNoteObserver;
    PRSRankingItemRanker *_ranker;
    NSMutableArray *_suggestions;
}

@property BOOL definiteLocalQuery;
@property (retain, nonatomic) NSMutableArray *results;
@property (readonly) CSFilesSearchQuery *query;
@property (readonly) NSDictionary *userQueryContentTypeDict;
@property (readonly) id prefetchedAttributesKeySet;
@property (readonly) NSMapTable *mapMetadataItemToResult;
@property (retain) SPKResponse *lastResponse;
@property (retain) SPMetadataPattern *subqueryPattern;
@property (retain) SPMetadataPattern *lastProcessedSubqueryPattern;
@property (retain) NSObject<OS_dispatch_semaphore> *correctionSem;
@property (retain) NSString *queryCorrection;
@property char isRewrite;
@property (nonatomic) char isPeopleSearch;
@property (retain) NSString *correctedQuery;
@property (readonly) long long nlpBitCount;
@property (getter=isPersistent) char persistent;
@property (readonly) NSString *queryString;
@property (readonly) NSArray *prefetchedAttributes;
@property (readonly) NSArray *sortingAttributes;
@property (retain) NSArray *queryTerms;
@property (readonly) NSArray *sortedNlpRankCategories;
@property BOOL highConfidenceNL;
@property BOOL advancedQuerySyntax;
@property BOOL isMath;
@property BOOL hasTargetApplicationURL;
@property (retain) NSDictionary *queryUnderstandingOutput;
@property (retain) NSData *queryEmbedding;
@property (readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) NSArray *filterQueries;

+ (void)initialize;
+ (void)preheat;
+ (void)_cancelTopHitQueryForQueryID:(long long)a0;
+ (id)_topHitQueryParametersForSearchString:(id)a0 options:(unsigned long long)a1 queryContext:(id)a2 keyboardLanguage:(id)a3;
+ (id)defaultPrefetchedAttributes;
+ (id)defaultPrefetchedAttributesKeySet;
+ (id)defaultSortingAttributes;
+ (id)defaultValuelistAttributes;
+ (unsigned int)searchDomain;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)ranker;
- (id)rankingQueries;
- (char)needsIO;
- (void)sendPerformanceFeedback:(id)a0 forKey:(id)a1;
- (char)isDocumentQuery;
- (void)_prepareQuery;
- (id)_scopesForOptions:(unsigned long long)a0;
- (void)_sendResponse:(id)a0;
- (void)executeQuery;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (char)isCoreSpotlightQuery;
- (id)queryStringForUserQuery:(id)a0 options:(unsigned long long)a1 queryContext:(id)a2 outFilterQueries:(id *)a3;
- (id)rankedNLCategoryOrderForQuery:(id)a0;
- (id)rankingQueriesAddingQueryTerms:(id)a0 rankingQueries:(id)a1;
- (id)returnFoundInAppsSectionFromOthers:(id)a0 contactsSection:(id)a1;
- (void)sendResponseForCompletion:(char)a0;
- (char)supportsRefinement;
- (void)updateWithQueryCorrection:(id)a0;
- (id)waitForQueryCorrection;
- (void)willSendPerformanceFeedback:(int)a0;

@end
