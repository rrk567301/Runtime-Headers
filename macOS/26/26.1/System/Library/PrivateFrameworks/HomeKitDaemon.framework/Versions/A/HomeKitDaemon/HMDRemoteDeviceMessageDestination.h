@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (id)initWithTarget:(id)a0;
- (id)initWithTarget:(id)a0 device:(id)a1;
- (unsigned long long)hash;
- (id)shortDescription;
- (id)privateDescription;
- (id)description;
- (id)remoteDestinationString;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end
