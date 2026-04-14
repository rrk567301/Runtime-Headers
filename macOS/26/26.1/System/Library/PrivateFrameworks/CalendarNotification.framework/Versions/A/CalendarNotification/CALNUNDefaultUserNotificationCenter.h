@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol>

@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllDeliveredNotifications;
- (id)notificationCategories;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (BOOL)addNotificationRequest:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (id)notificationSettingsForTopics;
- (id)notificationSettings;
- (void)setWantsNotificationResponsesDelivered;
- (void)removeAllPendingNotificationRequests;
- (void)setNotificationCategories:(id)a0;
- (id)deliveredNotifications;
- (BOOL)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
