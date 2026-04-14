@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (id)remoteDestinationString;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (id)initWithTarget:(id)a0;
- (id)privateDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTarget:(id)a0 device:(id)a1;

@end
