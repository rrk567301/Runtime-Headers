@class UNUserNotificationCenter, UNNotificationResponse;

@interface SpotlightUIShared.BaseTTRManager : NSObject <UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ invalidated;
    void /* unknown type, empty encoding */ queryID;
    void /* unknown type, empty encoding */ command;
    void /* unknown type, empty encoding */ notifiedCommand;
    void /* unknown type, empty encoding */ notificationMinInterval;
}

- (void)userNotificationCenter:(UNUserNotificationCenter *)a0 didReceiveNotificationResponse:(UNNotificationResponse *)a1 withCompletionHandler:(void (^)(void))a2;
- (id)init;
- (void).cxx_destruct;

@end
