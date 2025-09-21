@interface MAUSBDeviceIsochCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) char payloadAlignment;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithPayloadAlignment:(char)a0;

@end
