@class UNCKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNCKeyedObservable *_observable;
}

- (BOOL)isProtectedDataAvailable;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;
- (void)removeContentProtectionObserver:(id)a0;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0 excludedFromBackup:(BOOL)a1;
- (long long)_queue_keyBagLockState;
- (void).cxx_destruct;
- (long long)observedState;
- (id)classDStrategyExcludedFromBackup;
- (id)classCStrategyExcludedFromBackup;
- (BOOL)deviceUnlockedSinceBoot;
- (id)init;
- (void)addContentProtectionObserver:(id)a0;
- (id)classCStrategy;
- (id)classDStrategy;
- (long long)_queue_observedState;
- (void)dealloc;

@end
