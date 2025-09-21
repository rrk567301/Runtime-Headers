@interface MAUSBDevicePmanagedOUTCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) char elasticBuffer;
@property (readonly) char dropNotification;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithElasticBuffer:(char)a0 dropNotification:(char)a1;

@end
