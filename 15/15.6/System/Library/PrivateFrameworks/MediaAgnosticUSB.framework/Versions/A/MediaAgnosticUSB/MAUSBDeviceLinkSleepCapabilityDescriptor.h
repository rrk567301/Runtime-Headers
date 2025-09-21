@interface MAUSBDeviceLinkSleepCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) char linkSleepCapable;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithLinkSleepCapable:(char)a0;

@end
