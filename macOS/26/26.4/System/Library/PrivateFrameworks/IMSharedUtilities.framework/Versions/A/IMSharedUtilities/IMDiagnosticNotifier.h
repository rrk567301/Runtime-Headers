@class UNUserNotificationCenter;

@interface IMDiagnosticNotifier : NSObject

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;

- (void).cxx_destruct;
- (void)postNotification:(id)a0;
- (id)init;
- (void)postNotificationWithTitle:(id)a0 body:(id)a1;

@end
