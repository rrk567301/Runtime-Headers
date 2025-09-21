@interface MAUSBHostSynchronizationCapabilityDescriptor : MAUSBHostCapabilityDescriptor

@property (readonly) char mediaTimeAvailable;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithMediaTimeAvailable:(char)a0;

@end
