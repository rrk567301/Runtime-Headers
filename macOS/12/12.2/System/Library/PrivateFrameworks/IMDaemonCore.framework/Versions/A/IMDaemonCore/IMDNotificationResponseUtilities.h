@class UNUserNotificationCenter, NSString;

@interface IMDNotificationResponseUtilities : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_setupNotificationCenter;
- (void)_markMessageAsRead:(id)a0 inChat:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_sendMessageResponse:(id)a0 toMessage:(id)a1 inChat:(id)a2 withCompletionHandler:(id /* block */)a3;

@end
