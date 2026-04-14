@interface __HMDCurrentDeviceController : HMDDeviceController

- (id)init;
- (id)initWithIdentifier:(id)a0;
- (id)initWithDevice:(id)a0;
- (void)__handleDeviceUpdated:(id)a0;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;

@end
