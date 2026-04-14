@class UNCKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNCKeyedObservable *_observable;
}

- (long long)_queue_keyBagLockState;
- (BOOL)deviceUnlockedSinceBoot;
- (BOOL)isProtectedDataAvailable;
- (void)removeContentProtectionObserver:(id)a0;
- (void)addContentProtectionObserver:(id)a0;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0 excludedFromBackup:(BOOL)a1;
- (long long)_queue_observedState;
- (id)classCStrategy;
- (void).cxx_destruct;
- (long long)observedState;
- (id)init;
- (id)classDStrategy;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;
- (id)classCStrategyExcludedFromBackup;
- (void)dealloc;
- (id)classDStrategyExcludedFromBackup;

@end
