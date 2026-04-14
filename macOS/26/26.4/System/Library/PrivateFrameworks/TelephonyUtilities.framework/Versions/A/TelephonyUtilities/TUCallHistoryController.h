@class NSString, NSArray, TUDispatcher, CHManager, NSOperationQueue, NSPredicate, TUFeatureFlags, NSMutableSet, TUCallProviderManager;
@protocol TUCallHistoryControllerDataSource;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate>

@property (class, readonly, nonatomic) TUCallHistoryController *sharedController;

@property (readonly, nonatomic) TUFeatureFlags *featureFlags;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) TUDispatcher *dispatcher;
@property (retain, nonatomic) TUDispatcher *simpleIvarDispatcher;
@property (retain, nonatomic) NSArray *recentCalls;
@property (nonatomic) unsigned long long unreadCallCount;
@property (copy, nonatomic) NSArray *thirdPartyCallProviders;
@property (readonly, nonatomic) BOOL shouldUpdateMetadataCache;
@property (retain, nonatomic) NSMutableSet *metadataPreCachedOptions;
@property (readonly, nonatomic) id<TUCallHistoryControllerDataSource> dataSource;
@property (retain, nonatomic) NSOperationQueue *searchQueue;
@property (nonatomic) NSPredicate *preFetchingPredicate;
@property (nonatomic) unsigned long long coalescingStrategy;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1 shouldUpdateMetadataCache:(BOOL)a2;
+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;

- (void)updateReminderUUID:(id)a0 forRecentCall:(id)a1;
- (id)recentCallsWithPredicate:(id)a0;
- (void)deleteAllRecentCalls;
- (void)loadOlderRecentCalls;
- (void)reloadWithOptions:(unsigned long long)a0;
- (void)markRecentCallsAsReadWithPredicate:(id)a0;
- (BOOL)canLoadOlderRecentCalls;
- (void)boostQualityOfService;
- (id /* block */)callHistoryManagerRecentCallsDispatchBlock;
- (id /* block */)callHistoryManagerLoadOlderRecentCallsDispatchBlock;
- (long long)callHistoryControllerCallHistoryFetchLimit;
- (void)deleteRecentCalls:(id)a0;
- (void)deleteRecentCall:(id)a0;
- (void)loadDispatchQueue;
- (void)cancelSearchFetchOperations;
- (void)callHistoryDatabaseChanged:(id)a0;
- (id)initWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1 dataSource:(id)a2 shouldUpdateMetadataCache:(BOOL)a3;
- (void).cxx_destruct;
- (void)markRecentCallsAsRead;
- (void)markRecentAudioCallsAsRead;
- (id)init;
- (void)dispatcherDidFinishBoost:(id)a0;
- (id /* block */)callHistoryManagerInitializationDispatchBlock;
- (void)markUnreadRecentCallsAsReadWithPredicate:(id)a0;
- (void)providersChangedForProviderManager:(id)a0;
- (void)markRecentVideoCallsAsRead;
- (id)callsWithPredicate:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 batchSize:(unsigned long long)a3;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)dealloc;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)a0;

@end
