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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)expire:(id)a0;
- (id)firstExpirationDate;
- (id)heuristicsCached;
- (id)objectForKey:(id)a0 found:(char *)a1;
- (void)setObject:(id)a0 expirers:(id)a1 forKey:(id)a2;
- (void)_expire:(id)a0 postNotification:(char)a1;
- (void)_handleFocusStateUpdate:(id)a0;
- (id)_internExpirerLocked:(id)a0;
- (void)_observeUserFocusChanges;
- (void)expireAll;
- (char)isFocusModeActiveWithError:(id *)a0;

@end
