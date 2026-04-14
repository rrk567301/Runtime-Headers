@interface NotificationPreferences.NotificationPreferencesConnection : NSObject {
    void /* unknown type, empty encoding */ appPreferencesChanged;
    void /* unknown type, empty encoding */ notificationCenterAppsChanged;
    void /* unknown type, empty encoding */ preferencesChanged;
    void /* unknown type, empty encoding */ connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)serverDidComeAliveWithNotification:(id)a0;

@end
