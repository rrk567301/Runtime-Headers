@interface WBSManagedFeatureAvailability : NSObject {
    void /* unknown type, empty encoding */ rebroadcastedNotifications;
}

@property (class, nonatomic, readonly) WBSManagedFeatureAvailability *sharedInstance;

@property (nonatomic, readonly) BOOL shouldHideExtensionDiscovery;

- (id)init;
- (void).cxx_destruct;
- (void)handleNotificationWithNotification:(id)a0;

@end
