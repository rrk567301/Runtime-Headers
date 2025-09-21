@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol>

@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)removeAllDeliveredNotifications;
- (id)deliveredNotifications;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)setNotificationCategories:(id)a0;
- (void)setWantsNotificationResponsesDelivered;
- (id)notificationCategories;
- (id)notificationSettings;
- (id)notificationSettingsForTopics;
- (void)removeAllPendingNotificationRequests;
- (char)addNotificationRequest:(id)a0 error:(id *)a1;
- (char)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 error:(id *)a2;

@end
