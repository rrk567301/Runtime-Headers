@interface EOSRestoreBuddyController : NSObject

+ (id)sharedController;

- (void)healDeviceWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (BOOL)embeddedOSRestoreNetworkServicesReachable;

@end
