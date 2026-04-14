@class CNChangeHistoryAnchor, CNCDChangeHistoryClient, NSSet, NSManagedObjectContext;

@interface CNCDChangeHistoryResultQuery : CNTask

@property (readonly, nonatomic) CNCDChangeHistoryClient *client;
@property (readonly, nonatomic) BOOL shouldUnifyResults;
@property (readonly, nonatomic) BOOL includeGroupChanges;
@property (readonly, nonatomic) CNChangeHistoryAnchor *startingAnchor;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, copy, nonatomic) NSSet *excludedAuthors;

+ (id)os_log;
+ (id)taskForClient:(id)a0 shouldUnifyResults:(BOOL)a1 includeGroupChanges:(BOOL)a2 startingAnchor:(id)a3 context:(id)a4 excludedAuthors:(id)a5;
+ (id)deltaSyncValidationTaskWithClient:(id)a0 anchor:(id)a1 context:(id)a2;
+ (id)deltaSyncTaskWithClient:(id)a0 shouldUnifyResults:(BOOL)a1 includeGroupChanges:(BOOL)a2 startingAnchor:(id)a3 context:(id)a4 excludedAuthors:(id)a5;
+ (id)fullSyncTaskWithClient:(id)a0 shouldUnifyResults:(BOOL)a1 includeGroupChanges:(BOOL)a2 startingAnchor:(id)a3 context:(id)a4;
+ (BOOL)isAnchorValid:(id)a0 context:(id)a1;
+ (id)currentHistoryAnchorInContext:(id)a0 error:(id *)a1;
+ (id)changeHistoryResultForClient:(id)a0 shouldUnifyResults:(BOOL)a1 includeGroupChanges:(BOOL)a2 sinceAnchor:(id)a3 context:(id)a4 excludedAuthors:(id)a5 error:(id *)a6;

- (void).cxx_destruct;
- (id)run:(id *)a0;
- (id)initWithClient:(id)a0 shouldUnifyResults:(BOOL)a1 includeGroupChanges:(BOOL)a2 startingAnchor:(id)a3 context:(id)a4 excludedAuthors:(id)a5;
- (id)transactions:(id *)a0;
- (void)configureResult:(id)a0 forTransactions:(id)a1;
- (void)didRun;
- (id)lastTokenForClient;
- (id)requestForToken:(id)a0;

@end
