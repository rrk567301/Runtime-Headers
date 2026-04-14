@class NSString, NSObject;
@protocol OS_dispatch_queue, UNUserNotificationCenterDelegatePrivate, UNUserNotificationCenterDelegate;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak) id<UNUserNotificationCenterDelegatePrivate> privateDelegate;
@property (weak) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly) BOOL supportsContentExtensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsContentExtensions;
+ (id)currentNotificationCenter;

- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (id)notificationCategories;
- (id)deliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)setNotificationCategories:(id)a0;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)invalidateAndUnregister;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestRemoveAuthorizationWithCompletionHandler:(id /* block */)a0;
- (void)setNotificationRequests:(id)a0;
- (id)pendingNotificationRequests;
- (void)setNotificationRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)notificationTopics;
- (void)setBadgeCount:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 queue:(id)a1;
- (void)getNotificationSettingsForTopicsWithCompletionHandler:(id /* block */)a0;
- (void)didOpenApplicationForResponse:(id)a0;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)a0;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)removeSimilarNotificationRequests:(id)a0;
- (id)clearedInfoForDataProviderMigration;
- (void)removeAllDeliveredNotifications;
- (id)badgeNumber;
- (void)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (void)didChangeSettings:(id)a0;
- (void).cxx_destruct;
- (void)getNotificationTopicsWithCompletionHandler:(id /* block */)a0;
- (id)notificationSettings;
- (id)notificationSettingsForTopics;
- (void)addNotificationRequest:(id)a0;
- (id)init;
- (void)getNotificationCategoriesWithCompletionHandler:(id /* block */)a0;
- (void)setWantsNotificationResponsesDelivered;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0;
- (void)willPresentNotification:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getBadgeNumberWithCompletionHandler:(id /* block */)a0;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)didReceiveNotificationResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id /* block */)a0;
- (void)setNotificationTopics:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
