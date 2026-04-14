@class EDSearchableIndexScheduler, NSString, EDMessagePersistence, EDSpotlightDaemonClient, EDSearchableIndexAnalyticsPersistence, EDSearchableIndex, NSObject, EDSearchableIndexPersistence, EDPersistenceDatabase;
@protocol OS_os_log, EFCancelable;

@interface EDSearchableIndexManager : NSObject <EFLoggable, EDCategoryChangeHookResponder, EDMessageChangeHookResponder>

@property (class, readonly, copy) NSString *searchableIndexBundleID;
@property (class, readonly, copy) NSString *searchableIndexName;
@property (class, readonly, nonatomic) BOOL shouldCancelSearchQuery;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL needsToRedonate;
@property (retain, nonatomic) id<EFCancelable> turboModeObservationToken;
@property (readonly, nonatomic) EDSearchableIndexAnalyticsPersistence *analytics;
@property (readonly, nonatomic) EDSearchableIndexPersistence *persistence;
@property (readonly, nonatomic) EDSearchableIndexScheduler *scheduler;
@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) EDSpotlightDaemonClient *spotlightDaemonClient;
@property (readonly, nonatomic) EDSearchableIndex *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addSearchQueryCancelable:(id)a0;
+ (void)removeSearchQueryCancelable:(id)a0;
+ (id)searchableItemResultForExpression:(id)a0;

- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsChangingFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeCategorizationForMessages:(id)a0 userInitiated:(BOOL)a1 generationWindow:(id)a2;
- (void).cxx_destruct;
- (void)persistenceIsAddingMessages:(id)a0 journaled:(BOOL)a1 generationWindow:(id)a2;
- (void)test_tearDown;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidAddLabels:(id)a0 removeLabels:(id)a1 messages:(id)a2 generationWindow:(id)a3;
- (void)_removeItemsForPersistedMessages:(id)a0;
- (void)_startObservingTurboModeToggle;
- (void)enableIndexingAndBeginScheduling:(BOOL)a0;
- (id)initWithDatabase:(id)a0 messagePersistence:(id)a1 richLinkPersistence:(id)a2 hookResponder:(id)a3;
- (void)persistenceDidAddDataDetectionResults:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidFinishUpdates;
- (void)persistenceDidUpdateAuthenticationStateForMessages:(id)a0;
- (void)persistenceDidUpdateData:(id)a0 message:(id)a1;
- (void)persistenceIsAddingDataDetectionResults:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsAddingLabels:(id)a0 removingLabels:(id)a1 messages:(id)a2;
- (void)persistenceIsChangingCategorizationForMessages:(id)a0;
- (void)persistenceIsUpdatingAuthenticationStateForMessages:(id)a0;
- (void)persistenceWillAddLabels:(id)a0 removeLabels:(id)a1 messages:(id)a2;
- (void)persistenceWillBeginUpdates;
- (void)resetIndexForNewLibrary;
- (void)setNeedsToRedonate;

@end
