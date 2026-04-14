@class HMDHome;

@interface HMDAccessoryFirmwareUpdatePresencePolicy : HMDAccessoryFirmwareUpdatePolicy <NSCopying>

@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) BOOL presenceNeeded;

+ (id)logCategory;

- (void)configure;
- (void)registerForNotifications;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)evaluate;
- (void)handlePresenceChange:(id)a0;
- (id)initWithAccessory:(id)a0 presenceNeeded:(BOOL)a1 workQueue:(id)a2;

@end
