@class NSString, TUDispatcher, TUCallProviderManager, CHManager, NSArray, NSMutableSet;
@protocol TUCallHistoryControllerDataSource;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate>

@property (class, readonly, nonatomic) TUCallHistoryController *sharedController;

@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) TUDispatcher *dispatcher;
@property (retain, nonatomic) TUDispatcher *simpleIvarDispatcher;
@property (retain, nonatomic) NSArray *recentCalls;
@property (nonatomic) unsigned long long unreadCallCount;
@property (copy, nonatomic) NSArray *thirdPartyCallProviders;
@property (retain, nonatomic) NSMutableSet *metadataPreCachedOptions;
@property (readonly, nonatomic) id<TUCallHistoryControllerDataSource> dataSource;
@property (nonatomic) unsigned long long coalescingStrategy;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)a0;
- (void)boostQualityOfService;
- (void)dispatcherDidFinishBoost:(id)a0;
- (void)callHistoryDatabaseChanged:(id)a0;
- (void)deleteAllRecentCalls;
- (void)deleteRecentCall:(id)a0;
- (void)deleteRecentCalls:(id)a0;
- (void)markRecentCallsAsRead;
- (void)markRecentVideoCallsAsRead;
- (void)markRecentAudioCallsAsRead;
- (void)markRecentCallsAsReadWithPredicate:(id)a0;
- (id)recentCallsWithPredicate:(id)a0;
- (void)reloadWithOptions:(unsigned long long)a0;
- (id)initWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1 dataSource:(id)a2;
- (void)loadDispatchQueue;
- (id /* block */)callHistoryManagerInitializationDispatchBlock;
- (id /* block */)callHistoryManagerRecentCallsDispatchBlock;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)a0;

@end
