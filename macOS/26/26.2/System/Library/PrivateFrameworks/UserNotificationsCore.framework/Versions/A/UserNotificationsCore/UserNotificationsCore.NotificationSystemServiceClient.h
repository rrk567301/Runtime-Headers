@interface UserNotificationsCore.NotificationSystemServiceClient : NSObject <UNCNotificationSystemServiceClientProtocol, UNCNotificationCommonServiceServerProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_connection;
}

- (id)categoriesForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (void)dealloc;
- (id)allBundleIdentifiersForCategories;
- (id)categoryForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)categoryRepositoryDidChangeCategoriesForBundleIdentifier:(id)a0;
- (void)removeNotificationRecordsForIdentifiers:(id)a0 bundleIdentifier:(id)a1;

@end
