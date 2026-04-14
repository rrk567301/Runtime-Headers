@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
+ (id)retryFailuresDescriptor;
+ (id)taskQueueDescriptor;
+ (id)cellularDescriptor;
+ (id)recurrentRollbackDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)postUpgradeDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)setupAssistantFetchDescriptor;
+ (id)clientTriggeredWifiDescriptor;
+ (id)clientTriggeredCellularDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;
+ (id)clientHotfixWifiDescriptor;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementName:(id)a0;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;

@end
