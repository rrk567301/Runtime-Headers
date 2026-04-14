@class UNUserNotificationCenter;

@interface IMDiagnosticNotifier : NSObject

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;

- (void)postNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)postNotificationWithTitle:(id)a0 body:(id)a1;

@end
