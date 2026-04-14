@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)postUpgradeDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)taskQueueDescriptor;
+ (id)clientTriggeredWifiDescriptor;
+ (id)retryFailuresDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)setupAssistantFetchDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)cellularDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
+ (id)maintenanceWorkDescriptor;

- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)copyWithReplacementName:(id)a0;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;

@end
