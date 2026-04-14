@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (id)privateDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)remoteDestinationString;
- (id)initWithTarget:(id)a0 device:(id)a1;

@end
