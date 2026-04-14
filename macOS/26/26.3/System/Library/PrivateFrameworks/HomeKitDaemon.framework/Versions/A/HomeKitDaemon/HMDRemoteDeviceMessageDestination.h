@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (id)remoteDestinationString;
- (id)privateDescription;
- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)description;
- (id)initWithTarget:(id)a0 device:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
