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

@property (nonatomic) BOOL shouldIgnoreUnlockedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isProtectedDataAvailableWithState:(long long)a0;

- (void)setContentProtectionState:(long long)a0;
- (BOOL)isProtectedDataAvailable;
- (void)addContentProtectionObserver:(id)a0 withQueue:(id)a1;
- (id)init;
- (void)recheckContentProtectionState;
- (long long)observedState;
- (BOOL)isInSession;
- (id)initWithNotifications:(BOOL)a0 initialState:(long long)a1 unlockedSinceBoot:(BOOL)a2;
- (void).cxx_destruct;
- (void)addSynchronousContentProtectionObserver:(id)a0;
- (void)dealloc;
- (void)removeContentProtectionObserver:(id)a0;
- (BOOL)deviceUnlockedSinceBoot;
- (void)setInSession:(BOOL)a0;
- (id)diagnosticDescription;

@end
