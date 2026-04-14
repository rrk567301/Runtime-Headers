@interface UserNotificationsCore.NotificationSystemServiceClient : NSObject <UNCNotificationSystemServiceClientProtocol, UNCNotificationCommonServiceServerProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_connection;
}

- (id)categoriesForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (id)init;
- (void)dealloc;
- (id)allBundleIdentifiersForCategories;
- (id)categoryForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)categoryRepositoryDidChangeCategoriesForBundleIdentifier:(id)a0;
- (id)notificationRecordForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)removeNotificationRecordsForIdentifiers:(id)a0 bundleIdentifier:(id)a1;

@end
