@interface __HMDPlaceholderDeviceController : HMDDeviceController

+ (id)sharedPlaceholder;

- (id)init;
- (id)initWithDevice:(id)a0;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
