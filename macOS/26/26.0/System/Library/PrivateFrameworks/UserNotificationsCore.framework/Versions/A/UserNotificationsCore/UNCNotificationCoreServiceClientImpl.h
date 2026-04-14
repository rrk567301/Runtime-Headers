@interface UNCNotificationCoreServiceClientImpl : NSObject <UNCNotificationCoreServiceClientProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_connection;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void)dealloc;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (id)init;
- (id)categoriesForBundleIdentifier:(id)a0;
- (void)setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)removeNotificationRecordsWithNonPushTriggerForBundleIdentifier:(id)a0;
- (void)removeStoreForBundleIdentifier:(id)a0;
- (id)allBundleIdentifiersForCategories;
- (id)allBundleIdentifiersForNotifications;
- (id)categoryForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)categoryRepositoryDidChangeCategories:(id)a0;
- (id)notificationRecordForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (id)notificationRecordsForBundleIdentifier:(id)a0;
- (void)notificationRepositoryDidPerformUpdates:(id)a0 forBundleIdentifier:(id)a1;
- (void)performAction:(id)a0 forNotification:(id)a1 inApp:(id)a2 withUserText:(id)a3;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)a0;
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)a0;
- (void)removeNotificationRecordsForIdentifiersWithIdentifiers:(id)a0 bundleIdentifier:(id)a1;
- (void)removeSimilarNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (void)save:(id)a0 shouldRepost:(BOOL)a1 apsMessageTimestamp:(id)a2 forBundleIdentifier:(id)a3;
- (void)save:(id)a0 targetRevisionNumber:(id)a1 shouldRepost:(BOOL)a2 forBundleIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)setBadgeCount:(long long)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setBadgeString:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
