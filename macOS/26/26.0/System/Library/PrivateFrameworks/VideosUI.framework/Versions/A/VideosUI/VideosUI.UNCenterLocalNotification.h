@class UNUserNotificationCenter, UNNotification;

@interface VideosUI.UNCenterLocalNotification : NSObject <UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ service;
}

- (void)userNotificationCenter:(UNUserNotificationCenter *)a0 willPresentNotification:(UNNotification *)a1 withCompletionHandler:(void (^)(unsigned long long))a2;
- (id)init;
- (void).cxx_destruct;

@end
