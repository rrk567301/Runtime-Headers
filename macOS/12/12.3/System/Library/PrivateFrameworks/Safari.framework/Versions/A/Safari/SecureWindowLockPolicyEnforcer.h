@class NSTimer;
@protocol SecureWindow;

@interface SecureWindowLockPolicyEnforcer : NSObject {
    id<SecureWindow> _secureWindow;
    id _windowStateNotificationToken;
    NSTimer *_lockingTimer;
    id _keybagLockStatusChangedObservationToken;
    BOOL _lockPolicyEnforced;
    BOOL _windowToSecureIsMainWindow;
}

@property (readonly, nonatomic) double windowFocusLostLockingGracePeriod;

- (void).cxx_destruct;
- (void)stopEnforcingLockPolicy;
- (id)initWithSecureWindow:(id)a0;
- (void)startEnforcingLockPolicy;
- (void)scheduleSecureWindowLockingEvent;
- (void)cancelSecureWindowLockingEvent;
- (void)_secureWindowDidResignKeyNotification:(id)a0;
- (void)_secureWindowDidBecomeKeyNotification:(id)a0;

@end
