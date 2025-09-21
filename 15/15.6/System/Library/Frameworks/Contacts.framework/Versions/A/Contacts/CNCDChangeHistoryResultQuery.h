@class CNChangeHistoryAnchor, CNCDChangeHistoryClient, NSSet, NSManagedObjectContext;

@interface CNCDChangeHistoryResultQuery : CNTask

@property (readonly, nonatomic) CNCDChangeHistoryClient *client;
@property (readonly, nonatomic) char shouldUnifyResults;
@property (readonly, nonatomic) char includeGroupChanges;
@property (readonly, nonatomic) CNChangeHistoryAnchor *startingAnchor;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, copy, nonatomic) NSSet *excludedAuthors;

+ (id)os_log;
+ (id)changeHistoryResultForClient:(id)a0 shouldUnifyResults:(char)a1 includeGroupChanges:(char)a2 sinceAnchor:(id)a3 context:(id)a4 excludedAuthors:(id)a5 error:(id *)a6;
+ (id)currentHistoryAnchorInContext:(id)a0 error:(id *)a1;
+ (id)deltaSyncTaskWithClient:(id)a0 shouldUnifyResults:(char)a1 includeGroupChanges:(char)a2 startingAnchor:(id)a3 context:(id)a4 excludedAuthors:(id)a5;
+ (id)deltaSyncValidationTaskWithClient:(id)a0 anchor:(id)a1 context:(id)a2;
+ (id)fullSyncTaskWithClient:(id)a0 shouldUnifyResults:(char)a1 includeGroupChanges:(char)a2 startingAnchor:(id)a3 context:(id)a4;
+ (char)isAnchorValid:(id)a0 context:(id)a1;
+ (id)taskForClient:(id)a0 shouldUnifyResults:(char)a1 includeGroupChanges:(char)a2 startingAnchor:(id)a3 context:(id)a4 excludedAuthors:(id)a5;

- (void).cxx_destruct;
- (id)run:(id *)a0;
- (void)configureResult:(id)a0 forTransactions:(id)a1;
- (void)didRun;
- (id)initWithClient:(id)a0 shouldUnifyResults:(char)a1 includeGroupChanges:(char)a2 startingAnchor:(id)a3 context:(id)a4 excludedAuthors:(id)a5;
- (id)lastTokenForClient;
- (id)requestForToken:(id)a0;
- (id)transactions:(id *)a0;

@end
