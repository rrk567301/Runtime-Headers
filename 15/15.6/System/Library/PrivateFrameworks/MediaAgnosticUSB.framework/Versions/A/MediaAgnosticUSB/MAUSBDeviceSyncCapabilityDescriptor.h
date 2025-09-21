@interface MAUSBDeviceSyncCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) char mediaTimeAvailable;
@property (readonly) char timestampRequest;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithMediaTimeAvailable:(char)a0 timestampRequest:(char)a1;

@end
