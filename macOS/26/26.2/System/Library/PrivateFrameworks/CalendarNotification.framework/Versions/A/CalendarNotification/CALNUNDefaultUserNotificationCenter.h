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
- (BOOL)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 error:(id *)a2;
- (id)notificationSettings;
- (id)initWithBundleIdentifier:(id)a0;
- (void)setWantsNotificationResponsesDelivered;
- (id)deliveredNotifications;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (id)notificationCategories;
- (id)notificationSettingsForTopics;
- (void)removeAllPendingNotificationRequests;
- (BOOL)addNotificationRequest:(id)a0 error:(id *)a1;
- (void)setNotificationCategories:(id)a0;
- (void).cxx_destruct;

@end
