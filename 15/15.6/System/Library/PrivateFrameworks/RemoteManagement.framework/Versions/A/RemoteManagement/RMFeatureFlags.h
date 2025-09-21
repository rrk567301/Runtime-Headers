@interface RMFeatureFlags : NSObject

@property (class, readonly, nonatomic, getter=isAppDistributionPVEnabled) char AppDistributionPVEnabled;
@property (class, readonly, nonatomic, getter=isDiskManagementSubscriberEnabled) char DiskManagementSubscriberEnabled;
@property (class, readonly, nonatomic, getter=isFileConduitEnabled) char FileConduitEnabled;
@property (class, readonly, nonatomic, getter=isHTTPConduitEnabled) char HTTPConduitEnabled;
@property (class, readonly, nonatomic, getter=isManagedAppsEnabled) char ManagedAppsEnabled;
@property (class, readonly, nonatomic, getter=isNetworkEAPConfigurationEnabled) char NetworkEAPConfigurationEnabled;
@property (class, readonly, nonatomic, getter=isNetworkWiFiConfigurationEnabled) char NetworkWiFiConfigurationEnabled;
@property (class, readonly, nonatomic, getter=isAppleInternal) char appleInternal;
@property (class, readonly, nonatomic, getter=hasBridgeOS) char hasBridgeOS;

@end
