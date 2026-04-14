@interface EOSRestoreBuddyController : NSObject

+ (id)sharedController;

- (BOOL)embeddedOSRestoreNetworkServicesReachable;
- (void)healDeviceWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
