@class UNUserNotificationCenter;

@interface TPSUserNotificationController : TPSLocalNotificationController

@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter;

- (id)initWithBundleIdentifier:(id)a0;
- (void)removeNotificationWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isNotificationSettingValid;
- (void)removeAllNotifications;
- (void)sendNotificationWithIdentifier:(id)a0 collectionID:(id)a1 correlationID:(id)a2 content:(id)a3;
- (void)sendNotificationWithIdentifier:(id)a0 collectionID:(id)a1 correlationID:(id)a2 title:(id)a3 text:(id)a4 attachmentURL:(id)a5 extensionPayload:(id)a6;

@end
