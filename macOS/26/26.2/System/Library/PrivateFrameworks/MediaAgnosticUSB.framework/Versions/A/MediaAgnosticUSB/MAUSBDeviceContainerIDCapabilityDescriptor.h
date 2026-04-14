@class NSUUID;

@interface MAUSBDeviceContainerIDCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) NSUUID *uuid;

- (id)initWithUUID:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
