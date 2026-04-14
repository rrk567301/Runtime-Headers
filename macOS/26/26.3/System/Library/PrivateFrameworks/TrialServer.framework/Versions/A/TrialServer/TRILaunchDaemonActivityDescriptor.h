@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)retryFailuresDescriptor;
+ (id)postUpgradeDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)setupAssistantFetchDescriptor;
+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
+ (id)clientTriggeredWifiDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)maintenanceWorkDescriptor;
+ (id)cellularDescriptor;
+ (id)taskQueueDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;

- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;
- (id)description;
- (id)init;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementName:(id)a0;

@end
