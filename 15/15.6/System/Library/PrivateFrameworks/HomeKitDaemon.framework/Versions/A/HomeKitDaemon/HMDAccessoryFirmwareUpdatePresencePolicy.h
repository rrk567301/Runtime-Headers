@class HMDHome;

@interface HMDAccessoryFirmwareUpdatePresencePolicy : HMDAccessoryFirmwareUpdatePolicy <NSCopying>

@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) char presenceNeeded;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)evaluate;
- (void)configure;
- (void)registerForNotifications;
- (void)handlePresenceChange:(id)a0;
- (id)initWithAccessory:(id)a0 presenceNeeded:(char)a1 workQueue:(id)a2;

@end
