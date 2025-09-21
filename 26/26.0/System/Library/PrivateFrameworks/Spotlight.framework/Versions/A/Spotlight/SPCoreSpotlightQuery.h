@class CSSearchQuery, NSMutableDictionary, NSArray, NSMutableSet, NSString, NSObject, PRSRankingItemRanker;
@protocol OS_dispatch_source;

@interface SPCoreSpotlightQuery : SPMetadataQuery {
    NSMutableDictionary *_suggestions;
    BOOL _queryCanceled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queryLock;
    NSArray *_rankingQueries;
    NSArray *_rankingPatterns;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timeoutTimerLock;
    struct IndexResultsRegistry { unsigned long long queryId; NSString *redactedQuery; struct vector<IndexResults, std::allocator<IndexResults>> { struct IndexResults *__begin_; struct IndexResults *__end_; struct IndexResults *__cap_; } results; NSMutableDictionary *indexMapping; } _indexResultsRegistry;
    NSMutableDictionary *_groupedSections;
    PRSRankingItemRanker *_ranker;
    NSMutableSet *_seenHostBookmarkURL;
    NSMutableDictionary *_syntheticBookmarks;
    NSMutableSet *_hostSchemeHTTPS;
    BOOL _priorityTimerFired;
    BOOL _priorityResultsArrived;
}

@property (retain) CSSearchQuery *csQuery;
@property (readonly, nonatomic) int csQueryState;
@property (retain) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain) NSMutableSet *foundAliasedResults;

+ (void)preheat;
+ (id)defaultPrefetchedAttributes;
+ (unsigned int)searchDomain;

- (void)dealloc;
- (void)executeQuery;
- (void)cancel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isDocumentQuery;
- (void)_preupdateGroupSection:(id)a0 withResults:(id)a1;
- (BOOL)_removedItems:(id)a0 forBundleID:(id)a1;
- (BOOL)_updateGroupSection:(id)a0 withResults:(id)a1;
- (id)attributeSetForAttributes:(id)a0 fetchedValues:(id)a1;
- (id)buildGroupedResults:(id)a0;
- (BOOL)collectSearchResults:(id)a0;
- (void)completed:(id)a0;
- (void)createAndStartQuery:(id)a0;
- (id)createSearchQueryContext;
- (void)findMatchingKeyboardAliasActions;
- (void)foundCompletion:(id)a0 scores:(id)a1 bundleIDs:(id)a2;
- (void)foundCompletions:(id)a0;
- (void)foundItems:(id)a0;
- (void)gatherEnded;
- (void)initQuery;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (BOOL)isCoreSpotlightQuery;
- (id)potentialAlias;
- (id)potentialParameterString;
- (void)priorityGatherEnded;
- (void)removedItems:(id)a0 forBundleID:(id)a1;
- (id)responseSections;
- (BOOL)topHitNominatedByPommesScoringforBundleIdentifier:(id)a0;

@end
