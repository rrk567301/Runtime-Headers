@class CSSearchQuery, NSArray, NSMutableDictionary, PRSRankingItemRanker, SPMetadataPattern, NSMutableSet;

@interface SPCoreSpotlightQuery : SPMetadataQuery {
    NSArray *_rankingQueries;
    NSArray *_rankingPatterns;
    BOOL _queryCanceled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queryLock;
    NSMutableDictionary *_groupedSections;
    NSMutableDictionary *_suggestions;
    PRSRankingItemRanker *_ranker;
    NSMutableSet *_seenHostBookmarkURL;
    NSMutableDictionary *_syntheticBookmarks;
    NSMutableSet *_hostSchemeHTTPS;
}

@property (retain) CSSearchQuery *csQuery;
@property (readonly) SPMetadataPattern *queryPattern;
@property (readonly, nonatomic) BOOL gatherComplete;

+ (void)preheat;
+ (id)defaultPrefetchedAttributes;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (void)executeQuery;
- (BOOL)isDocumentQuery;
- (BOOL)isCoreSpotlightQuery;
- (BOOL)_updateResultSet:(id)a0 withSortedResults:(id)a1;
- (id)buildGroupedResults:(id)a0;
- (void)_preupdateGroupSection:(id)a0 withResults:(id)a1;
- (BOOL)_updateGroupSection:(id)a0 withResults:(id)a1;
- (BOOL)_removedItems:(id)a0 forBundleID:(id)a1;
- (id)responseSections;
- (BOOL)_updateGroupSections:(id)a0;
- (void)foundItems:(id)a0;
- (void)foundCompletion:(id)a0 scores:(id)a1 bundleIDs:(id)a2;
- (void)foundCompletions:(id)a0;
- (void)gatherEnded;
- (void)removedItems:(id)a0 forBundleID:(id)a1;
- (void)completed:(id)a0;
- (id)resultWithIdentifier:(id)a0 title:(id)a1 url:(id)a2 bundleIdentifier:(id)a3;
- (void)initQuery;

@end
