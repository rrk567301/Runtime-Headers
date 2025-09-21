@class HKObserverSet, NSString, HKSynchronousObserverSet, NSObject;
@protocol OS_dispatch_queue;

@interface HDContentProtectionManager : NSObject <HDDiagnosticObject> {
    _Atomic int _contentProtectionState;
    _Atomic BOOL _shouldIgnoreUnlockedState;
    _Atomic BOOL _unlockedSinceBoot;
    _Atomic BOOL _isSession;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_observationQueue;
    HKObserverSet *_observers;
    HKSynchronousObserverSet *_synchronousObservers;
    double _beganObservingTime;
    double _lastNotificationTime;
    double _lastRecheckTime;
}

@property (nonatomic) char shouldIgnoreUnlockedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isProtectedDataAvailableWithState:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isProtectedDataAvailable;
- (id)diagnosticDescription;
- (char)deviceUnlockedSinceBoot;
- (void)setInSession:(char)a0;
- (char)isInSession;
- (void)addContentProtectionObserver:(id)a0 withQueue:(id)a1;
- (void)addSynchronousContentProtectionObserver:(id)a0;
- (long long)observedState;
- (void)recheckContentProtectionState;
- (void)setContentProtectionState:(long long)a0;
- (id)initWithNotifications:(char)a0 initialState:(long long)a1 unlockedSinceBoot:(char)a2;
- (void)removeContentProtectionObserver:(id)a0;

@end
