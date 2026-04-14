@interface SiriCrossDeviceArbitrationFeedback.LocalNotificationCenterImpl : NSObject <UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ center;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
