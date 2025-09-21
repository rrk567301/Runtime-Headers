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

- (id)initWithBundleIdentifier:(id)a0;
- (id)deliveredNotifications;
- (void)didOpenApplicationForResponse:(id)a0;
- (id)notificationCategories;
- (void)removeAllPendingNotificationRequests;
- (void)getNotificationTopicsWithCompletionHandler:(id /* block */)a0;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id /* block */)a0;
- (id)notificationSettings;
- (void)setNotificationCategories:(id)a0;
- (id)notificationSettingsForTopics;
- (void)getNotificationCategoriesWithCompletionHandler:(id /* block */)a0;
- (void)removeAllDeliveredNotifications;
- (void)getBadgeNumberWithCompletionHandler:(id /* block */)a0;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)setWantsNotificationResponsesDelivered;
- (void)setNotificationTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationSettingsForTopicsWithCompletionHandler:(id /* block */)a0;
- (void)willPresentNotification:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)a0;
- (void)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (void)setNotificationRequests:(id)a0;
- (void)didChangeSettings:(id)a0;
- (id)init;
- (id)clearedInfoForDataProviderMigration;
- (id)notificationTopics;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addNotificationRequest:(id)a0;
- (void)invalidateAndUnregister;
- (id)initWithBundleIdentifier:(id)a0 queue:(id)a1;
- (void)setBadgeCount:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)pendingNotificationRequests;
- (id)badgeNumber;
- (void)didReceiveNotificationResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setNotificationRequests:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestRemoveAuthorizationWithCompletionHandler:(id /* block */)a0;
- (void)removeSimilarNotificationRequests:(id)a0;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
