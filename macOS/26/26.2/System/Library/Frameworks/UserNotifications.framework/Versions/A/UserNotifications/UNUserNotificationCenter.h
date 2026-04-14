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

- (void)removeAllDeliveredNotifications;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)removeSimilarNotificationRequests:(id)a0;
- (id)notificationSettings;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id /* block */)a0;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void)setWantsNotificationResponsesDelivered;
- (void)setNotificationRequests:(id)a0;
- (id)deliveredNotifications;
- (id)badgeNumber;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0 queue:(id)a1;
- (void)setNotificationTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)getBadgeNumberWithCompletionHandler:(id /* block */)a0;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0;
- (id)notificationCategories;
- (id)notificationSettingsForTopics;
- (void)didReceiveNotificationResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationSettingsForTopicsWithCompletionHandler:(id /* block */)a0;
- (void)removeAllPendingNotificationRequests;
- (id)pendingNotificationRequests;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setNotificationCategories:(id)a0;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)notificationTopics;
- (void).cxx_destruct;
- (void)addNotificationRequest:(id)a0;
- (void)requestRemoveAuthorizationWithCompletionHandler:(id /* block */)a0;
- (void)setNotificationRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)clearedInfoForDataProviderMigration;
- (void)invalidateAndUnregister;
- (void)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (void)setBadgeCount:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)willPresentNotification:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationTopicsWithCompletionHandler:(id /* block */)a0;
- (void)getNotificationCategoriesWithCompletionHandler:(id /* block */)a0;
- (void)didOpenApplicationForResponse:(id)a0;
- (void)didChangeSettings:(id)a0;

@end
