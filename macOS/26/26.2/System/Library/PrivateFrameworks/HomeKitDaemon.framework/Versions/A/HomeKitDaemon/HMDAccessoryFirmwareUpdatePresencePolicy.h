@class HMDHome;

@interface HMDAccessoryFirmwareUpdatePresencePolicy : HMDAccessoryFirmwareUpdatePolicy <NSCopying>

@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) BOOL presenceNeeded;

+ (id)logCategory;

- (void)configure;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)handlePresenceChange:(id)a0;
- (id)initWithAccessory:(id)a0 presenceNeeded:(BOOL)a1 workQueue:(id)a2;

@end
