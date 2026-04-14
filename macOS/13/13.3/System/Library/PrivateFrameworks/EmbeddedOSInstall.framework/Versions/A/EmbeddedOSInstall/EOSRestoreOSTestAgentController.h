@interface EOSRestoreOSTestAgentController : NSObject

+ (id)sharedController;

- (void)bootDeviceWithRepairOSBundlePath:(id)a0 options:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)currentHardwareHasEmbeddedDevice;
- (void)healDeviceWithBundlePath:(id)a0 options:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
