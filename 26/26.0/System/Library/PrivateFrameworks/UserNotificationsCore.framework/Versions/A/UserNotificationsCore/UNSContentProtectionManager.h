@class UNCKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNCKeyedObservable *_observable;
}

- (id)classCStrategyExcludedFromBackup;
- (void)dealloc;
- (id)classDStrategy;
- (id)classDStrategyExcludedFromBackup;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0 excludedFromBackup:(BOOL)a1;
- (void)removeContentProtectionObserver:(id)a0;
- (id)classCStrategy;
- (id)init;
- (long long)_queue_observedState;
- (BOOL)deviceUnlockedSinceBoot;
- (BOOL)isProtectedDataAvailable;
- (void)addContentProtectionObserver:(id)a0;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;
- (long long)_queue_keyBagLockState;
- (void).cxx_destruct;
- (long long)observedState;

@end
