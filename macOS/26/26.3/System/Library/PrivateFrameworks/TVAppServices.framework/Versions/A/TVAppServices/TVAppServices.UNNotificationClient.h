@class UNUserNotificationCenter, UNNotification, UNNotificationResponse;

@interface TVAppServices.UNNotificationClient : NSObject <UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ center;
    void /* unknown type, empty encoding */ cancellables;
}

- (id)init;
- (void)userNotificationCenter:(UNUserNotificationCenter *)a0 didReceiveNotificationResponse:(UNNotificationResponse *)a1 withCompletionHandler:(void (^)(void))a2;
- (void).cxx_destruct;
- (void)userNotificationCenter:(UNUserNotificationCenter *)a0 willPresentNotification:(UNNotification *)a1 withCompletionHandler:(void (^)(unsigned long long))a2;
- (void)userNotificationCenter:(id)a0 didChangeSettings:(id)a1;
- (void)userNotificationCenter:(id)a0 didOpenApplicationForResponse:(id)a1;

@end
