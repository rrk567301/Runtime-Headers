@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (id)privateDescription;
- (id)remoteDestinationString;
- (id)debugDescription;
- (id)initWithTarget:(id)a0 device:(id)a1;
- (id)initWithTarget:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)description;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
