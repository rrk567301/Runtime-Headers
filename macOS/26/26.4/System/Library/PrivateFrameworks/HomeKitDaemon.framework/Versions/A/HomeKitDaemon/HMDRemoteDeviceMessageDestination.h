@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)debugDescription;
- (id)privateDescription;
- (id)remoteDestinationString;
- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTarget:(id)a0 device:(id)a1;

@end
