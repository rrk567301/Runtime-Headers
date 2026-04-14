@interface UserNotificationsCore.UserNotificationsCloudPushManager : NSObject <UNSNotificationCategoryRepositoryObserver> {
    void /* unknown type, empty encoding */ pushManagerOptions;
    void /* unknown type, empty encoding */ categoryRepository;
    void /* unknown type, empty encoding */ pushHandler;
    void /* unknown type, empty encoding */ settingsProvider;
    void /* unknown type, empty encoding */ sourceProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)categoryRepository:(id)a0 didChangeCategoriesForBundleIdentifier:(id)a1;

@end
