@class UNCKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNCKeyedObservable *_observable;
}

- (id)classCStrategy;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0 excludedFromBackup:(BOOL)a1;
- (long long)observedState;
- (long long)_queue_keyBagLockState;
- (void)addContentProtectionObserver:(id)a0;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;
- (id)classCStrategyExcludedFromBackup;
- (id)classDStrategyExcludedFromBackup;
- (void)dealloc;
- (void).cxx_destruct;
- (id)classDStrategy;
- (long long)_queue_observedState;
- (BOOL)deviceUnlockedSinceBoot;
- (void)removeContentProtectionObserver:(id)a0;
- (BOOL)isProtectedDataAvailable;
- (id)init;

@end
