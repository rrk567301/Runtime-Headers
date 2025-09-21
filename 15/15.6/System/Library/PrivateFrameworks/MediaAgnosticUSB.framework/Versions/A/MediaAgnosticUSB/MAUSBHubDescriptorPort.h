@interface MAUSBHubDescriptorPort : NSObject

@property (readonly) char deviceNonRemovable;

- (id)initWithDeviceNonRemovable:(char)a0;

@end
