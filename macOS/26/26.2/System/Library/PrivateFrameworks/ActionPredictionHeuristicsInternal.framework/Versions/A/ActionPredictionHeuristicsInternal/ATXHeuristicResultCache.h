@class NSMutableDictionary, BPSSink, NSHashTable, BMBiomeScheduler, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface ATXHeuristicResultCache : NSObject {
    NSMutableDictionary *_cache;
    NSHashTable *_expirerInternTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSNumber *_cachedIsFocusActiveState;
    BMBiomeScheduler *_focusScheduler;
    BPSSink *_focusSink;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _appRefreshToken;
    int _significantTimeToken;
    int _learnRefreshToken;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)sharedInstance;
+ (id)sharedPassLibrary;

- (void)expire:(id)a0;
- (BOOL)isFocusModeActiveWithError:(id *)a0;
- (id)objectForKey:(id)a0 found:(BOOL *)a1;
- (void).cxx_destruct;
- (id)firstExpirationDate;
- (id)_internExpirerLocked:(id)a0;
- (void)setObject:(id)a0 expirers:(id)a1 forKey:(id)a2;
- (void)expireAll;
- (id)heuristicsCached;
- (void)_observeUserFocusChanges;
- (void)_handleFocusStateUpdate:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_expire:(id)a0 postNotification:(BOOL)a1;

@end
