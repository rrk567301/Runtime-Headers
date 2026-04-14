@interface UserNotificationsCore.SettingsCenterListener : NSObject <UNNotificationSettingsCenterObserver> {
    void /* unknown type, empty encoding */ delegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)userNotificationSettingsCenter:(id)a0 didUpdateNotificationSourceIdentifiers:(id)a1;

@end
