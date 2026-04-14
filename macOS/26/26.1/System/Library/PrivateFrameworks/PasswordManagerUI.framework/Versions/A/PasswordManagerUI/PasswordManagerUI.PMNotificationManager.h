@interface PasswordManagerUI.PMNotificationManager : NSObject <WBSPasswordsNotificationManagerDelegate> {
    void /* unknown type, empty encoding */ notificationManager;
    void /* unknown type, empty encoding */ _notifiedAccount;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void).cxx_destruct;
- (id)init;
- (void)notificationManager:(id)a0 didReceiveResponseOfType:(long long)a1 toNotificationOfType:(long long)a2 withUserInfo:(id)a3;
- (void)notificationManagerCouldNotFindSavedAccountMatchingNotificationPayload:(id)a0;

@end
