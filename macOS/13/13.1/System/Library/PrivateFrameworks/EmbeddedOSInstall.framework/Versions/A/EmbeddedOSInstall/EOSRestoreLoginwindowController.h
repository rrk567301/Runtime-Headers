@interface EOSRestoreLoginwindowController : NSObject

@property BOOL bootFailedDuringShouldHeal;

+ (id)sharedController;

- (BOOL)currentHardwareHasEmbeddedDevice;
- (void)shouldHealEmbeddedDeviceWithProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)healDeviceWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
