@class HMDDevice;

@interface HMDEventTriggerDevice : HMFObject

@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, nonatomic, getter=isCurrentDevice) BOOL currentDevice;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCurrentDeviceForHome:(id)a0;
- (id)initWithDevice:(id)a0 forHome:(id)a1;

@end
