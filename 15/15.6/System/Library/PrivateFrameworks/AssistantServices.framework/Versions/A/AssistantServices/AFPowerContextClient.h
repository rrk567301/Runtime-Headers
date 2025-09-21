@interface AFPowerContextClient : NSObject {
    int _notificationToken;
    unsigned int _registrationStatus;
}

- (id)init;
- (char)_isNotificationTokenRegistered;
- (void)_registerForDarwinNotificationIfNeeded;
- (unsigned long long)currentEncodedPowerPolicyWithError:(id *)a0;
- (id)currentPowerPolicyWithError:(id *)a0;
- (char)updateCurrentPowerPolicy:(id)a0 withError:(id *)a1;

@end
