@interface HomeKitClips.CloudCredentialsAvailabilityListener : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ timerProvider;
    void /* unknown type, empty encoding */ mutex;
}

- (void)handleIdentityUpdateNotification:(id)a0;
- (void)handleAccountChangedNotification:(id)a0;

@end
