@class NSString;

@interface MechanismAssertionWithDarwinNotifications : MechanismAssertion {
    int _inStateToken;
    int _outStateToken;
    char _isInState;
}

@property (readonly, nonatomic) NSString *inStateNotificationName;
@property (readonly, nonatomic) NSString *outStateNotificationName;

- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)_notificationNameForInState:(char)a0;
- (int *)_notificationTokenForInState:(char)a0;
- (void)_registerDarwinNotificationForInState:(char)a0;
- (void)_unregisterDarwinNotificationForInstate:(char)a0;
- (id)assertInState;
- (void)handleAssertionFailureWithReason:(id)a0 error:(id)a1;
- (void)handleAssertionSuccessWithReason:(id)a0;
- (id)initWithMechanism:(id)a0 inStateNotificationName:(id)a1 outStateNotificationName:(id)a2;

@end
