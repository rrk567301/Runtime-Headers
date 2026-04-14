@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol>

@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (id)notificationCategories;
- (id)deliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)setNotificationCategories:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)removeAllDeliveredNotifications;
- (void).cxx_destruct;
- (id)notificationSettings;
- (id)notificationSettingsForTopics;
- (void)setWantsNotificationResponsesDelivered;
- (BOOL)addNotificationRequest:(id)a0 error:(id *)a1;
- (BOOL)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 error:(id *)a2;

@end
