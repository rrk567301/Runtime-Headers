@class CSSearchQuery, NSMutableDictionary, NSArray, PRSRankingItemRanker, SPMetadataPattern, NSObject, NSMutableSet;
@protocol OS_dispatch_source;

@interface SPCoreSpotlightQuery : SPMetadataQuery {
    NSMutableDictionary *_suggestions;
    BOOL _queryCanceled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queryLock;
    NSArray *_rankingQueries;
    NSArray *_rankingPatterns;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timeoutTimerLock;
    NSMutableDictionary *_groupedSections;
    PRSRankingItemRanker *_ranker;
    NSMutableSet *_seenHostBookmarkURL;
    NSMutableDictionary *_syntheticBookmarks;
    NSMutableSet *_hostSchemeHTTPS;
    BOOL _priorityTimerFired;
    BOOL _priorityResultsArrived;
}

@property (retain) CSSearchQuery *csQuery;
@property (readonly) SPMetadataPattern *queryPattern;
@property (readonly, nonatomic) int csQueryState;
@property (retain) NSObject<OS_dispatch_source> *timeoutTimer;

+ (void)preheat;
+ (id)defaultPrefetchedAttributes;
+ (unsigned int)searchDomain;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isDocumentQuery;
- (void)_preupdateGroupSection:(id)a0 withResults:(id)a1;
- (BOOL)_removedItems:(id)a0 forBundleID:(id)a1;
- (BOOL)_updateGroupSection:(id)a0 withResults:(id)a1;
- (BOOL)_updateGroupSections:(id)a0;
- (BOOL)_updateResultSet:(id)a0 withSortedResults:(id)a1;
- (id)buildGroupedResults:(id)a0;
- (void)completed:(id)a0;
- (void)createAndStartQuery:(id)a0;
- (id)createSearchQueryContext;
- (void)executeQuery;
- (void)foundCompletion:(id)a0 scores:(id)a1 bundleIDs:(id)a2;
- (void)foundCompletions:(id)a0;
- (void)foundItems:(id)a0;
- (void)gatherEnded;
- (void)initQuery;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (BOOL)isCoreSpotlightQuery;
- (void)priorityGatherEnded;
- (void)removedItems:(id)a0 forBundleID:(id)a1;
- (id)responseSections;
- (id)resultWithIdentifier:(id)a0 title:(id)a1 url:(id)a2 bundleIdentifier:(id)a3;
- (BOOL)topHitNominatedByPommesScoringforBundleIdentifier:(id)a0;

@end
