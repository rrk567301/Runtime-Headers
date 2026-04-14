@class UNUserNotificationCenter;

@interface IMDiagnosticNotifier : NSObject

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;

- (id)init;
- (void)postNotification:(id)a0;
- (void).cxx_destruct;
- (void)postNotificationWithTitle:(id)a0 body:(id)a1;

@end
