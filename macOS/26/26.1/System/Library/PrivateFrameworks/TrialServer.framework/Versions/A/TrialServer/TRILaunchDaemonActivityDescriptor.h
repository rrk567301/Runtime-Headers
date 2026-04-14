@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)setupAssistantFetchDescriptor;
+ (id)maintenanceWorkDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)postUpgradeDescriptor;
+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
+ (id)clientTriggeredWifiDescriptor;
+ (id)taskQueueDescriptor;
+ (id)cellularDescriptor;
+ (id)retryFailuresDescriptor;

- (unsigned long long)hash;
- (id)copyWithReplacementName:(id)a0;
- (id)description;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (id)init;

@end
