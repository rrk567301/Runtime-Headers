@class HMDDevice;

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement

@property (readonly) HMDDevice *device;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOutputDevice:(id)a0 device:(id)a1;

@end
