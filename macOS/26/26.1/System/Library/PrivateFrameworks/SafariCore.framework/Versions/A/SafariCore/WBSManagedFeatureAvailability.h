@interface WBSManagedFeatureAvailability : NSObject {
    void /* unknown type, empty encoding */ rebroadcastedNotifications;
}

@property (class, nonatomic, readonly) WBSManagedFeatureAvailability *sharedInstance;

@property (nonatomic, readonly) BOOL shouldHideExtensionDiscovery;

- (void).cxx_destruct;
- (id)init;
- (void)handleNotificationWithNotification:(id)a0;

@end
