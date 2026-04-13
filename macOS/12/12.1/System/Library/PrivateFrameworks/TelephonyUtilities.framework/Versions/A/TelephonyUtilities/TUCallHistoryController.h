@class NSString, TUDispatcher, TUCallProviderManager, CHManager, NSArray, NSMutableSet;

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
@property (nonatomic) unsigned long long coalescingStrategy;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)providersChangedForProviderManager:(id)a0;
- (void)boostQualityOfService;
- (id)initWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)a0;
- (id /* block */)callHistoryManagerRecentCallsDispatchBlock;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)markRecentCallsAsReadWithPredicate:(id)a0;
- (id)recentCallsWithPredicate:(id)a0;
- (void)dispatcherDidFinishBoost:(id)a0;
- (void)loadDispatchQueue;
- (id /* block */)callHistoryManagerInitializationDispatchBlock;
- (void)callHistoryDatabaseChanged:(id)a0;
- (void)deleteAllRecentCalls;
- (void)deleteRecentCall:(id)a0;
- (void)deleteRecentCalls:(id)a0;
- (void)markRecentCallsAsRead;
- (void)markRecentVideoCallsAsRead;
- (void)markRecentAudioCallsAsRead;
- (void)reloadWithOptions:(unsigned long long)a0;

@end
