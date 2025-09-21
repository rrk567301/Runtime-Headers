@interface UserNotificationsCore.NotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ clientConnection;
    void /* unknown type, empty encoding */ clientAuditToken;
    void /* unknown type, empty encoding */ clientBundleIdentifier;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_serverConnection;
}

- (void)willPresentNotification:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setNotificationRequests:(id)a0 forBundleIdentifier:(id)a1;
- (void)getNotificationSettingsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setBadgeCount:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setBadgeString:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)getNotificationCategoriesForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addNotificationRequest:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)replaceContentForRequestWithIdentifier:(id)a0 bundleIdentifier:(id)a1 replacementContent:(id)a2 completionHandler:(id /* block */)a3;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeSimilarNotificationRequests:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setNotificationTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)didReceiveNotificationResponse:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setNotificationCategories:(id)a0 forBundleIdentifier:(id)a1;
- (void)setObservingUserNotifications:(BOOL)a0 forBundleIdentifier:(id)a1;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getNotificationTopicsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getBadgeNumberForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidateBundleIdentifier:(id)a0;
- (void)didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
