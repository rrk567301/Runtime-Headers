@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)maintenanceWorkDescriptor;
+ (id)setupAssistantFetchDescriptor;
+ (id)clientTriggeredWifiDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)retryFailuresDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;
+ (id)taskQueueDescriptor;
+ (id)cellularDescriptor;
+ (id)postUpgradeDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (id)init;
- (id)copyWithReplacementName:(id)a0;
- (id)description;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
