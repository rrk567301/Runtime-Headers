@class NSSet, NSError;

@interface SPCoreSpotlightManagedQuery : SPCoreSpotlightQuery {
    NSSet *_startedQueries;
    NSSet *_gatherEndedQueries;
    NSSet *_completedQueries;
    NSSet *_erroredQueries;
    NSError *_mostRecentError;
}

+ (void)preheat;
+ (id)getHomeDir;

- (void)cancel;
- (void).cxx_destruct;
- (void)executeQuery;
- (void)dealloc;
- (void)completedQuery:(id)a0 error:(id)a1;
- (void)createAndStartQuery:(id)a0;
- (void)foundItems:(id)a0 forQuery:(id)a1;
- (void)gatherEndedForQuery:(id)a0;
- (id)getEnabledIndexPaths;

@end
