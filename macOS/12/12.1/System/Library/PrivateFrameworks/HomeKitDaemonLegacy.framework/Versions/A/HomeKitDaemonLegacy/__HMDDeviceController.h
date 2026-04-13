@interface __HMDDeviceController : HMDDeviceController

- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateWithDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)__handleAddedAccount:(id)a0;
- (void)__handleAddedDevice:(id)a0;

@end
