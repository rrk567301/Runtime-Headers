@class UNCKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    BOOL _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNCKeyedObservable *_observable;
}

- (id)contentProtectionStrategyForMinimumProtection:(id)a0 excludedFromBackup:(BOOL)a1;
- (void)addContentProtectionObserver:(id)a0;
- (id)classCStrategyExcludedFromBackup;
- (long long)_queue_observedState;
- (BOOL)isProtectedDataAvailable;
- (id)init;
- (id)classDStrategy;
- (id)classDStrategyExcludedFromBackup;
- (long long)observedState;
- (void).cxx_destruct;
- (long long)_queue_keyBagLockState;
- (void)dealloc;
- (void)removeContentProtectionObserver:(id)a0;
- (BOOL)deviceUnlockedSinceBoot;
- (id)classCStrategy;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;

@end
