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

- (void)dispatcherDidFinishBoost:(id)a0;
- (void)dealloc;
- (void)loadDispatchQueue;
- (void)deleteAllRecentCalls;
- (void)markRecentCallsAsReadWithPredicate:(id)a0;
- (id /* block */)callHistoryManagerLoadOlderRecentCallsDispatchBlock;
- (void)markRecentAudioCallsAsRead;
- (void)reloadWithOptions:(unsigned long long)a0;
- (void)callHistoryDatabaseChanged:(id)a0;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (id)recentCallsWithPredicate:(id)a0;
- (void)deleteRecentCall:(id)a0;
- (void)markRecentVideoCallsAsRead;
- (id)init;
- (void)loadOlderRecentCalls;
- (void)markRecentCallsAsRead;
- (void)updateReminderUUID:(id)a0 forRecentCall:(id)a1;
- (id)callsWithPredicate:(id)a0 limit:(unsigned long long)a1 offset:(unsigned long long)a2 batchSize:(unsigned long long)a3;
- (id)initWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1 dataSource:(id)a2 shouldUpdateMetadataCache:(BOOL)a3;
- (long long)callHistoryControllerCallHistoryFetchLimit;
- (void)deleteRecentCalls:(id)a0;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)a0;
- (BOOL)canLoadOlderRecentCalls;
- (void)cancelSearchFetchOperations;
- (id /* block */)callHistoryManagerInitializationDispatchBlock;
- (id /* block */)callHistoryManagerRecentCallsDispatchBlock;
- (void)providersChangedForProviderManager:(id)a0;
- (void).cxx_destruct;
- (void)boostQualityOfService;

@end
