@class UNCKeyedObservable, NSObject;
@protocol OS_dispatch_queue;

@interface UNSContentProtectionManager : NSObject {
    long long _contentProtectionState;
    char _unlockedSinceBoot;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    UNCKeyedObservable *_observable;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isProtectedDataAvailable;
- (char)deviceUnlockedSinceBoot;
- (long long)observedState;
- (void)removeContentProtectionObserver:(id)a0;
- (void)_queue_adjustContentProtectionStateWithBlock:(id /* block */)a0;
- (long long)_queue_keyBagLockState;
- (long long)_queue_observedState;
- (void)addContentProtectionObserver:(id)a0;
- (id)classCStrategy;
- (id)classCStrategyExcludedFromBackup;
- (id)classDStrategy;
- (id)classDStrategyExcludedFromBackup;
- (id)contentProtectionStrategyForMinimumProtection:(id)a0 excludedFromBackup:(char)a1;

@end
