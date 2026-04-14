@class NSLock, NSMutableDictionary, NSXPCConnection;

@interface EOSRestoreServiceController : NSObject <EmbeddedOSInstallServiceClientProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSLock *serviceConnectionLock;
@property (retain) NSMutableDictionary *progressHandlersDictionary;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_connectToService;
- (void)preflightPackageSpecifiers:(id)a0 options:(id)a1 tagPrefix:(id)a2 completionHandler:(id /* block */)a3;
- (void)getLocalFDRDataFromESPWithCompletionHandler:(id /* block */)a0;
- (void)shouldHealEmbeddedDeviceWithCompletionHandler:(id /* block */)a0;
- (void)restoreDeviceWithBundleSpecifier:(id)a0 options:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)preflightBundleForHealingWithCompletionHandler:(id /* block */)a0;
- (void)lockRestoreQueueForCLIRestoreWithCompletionHandler:(id /* block */)a0;
- (void)reportRestoreProgressForUUID:(id)a0 restorePhase:(long long)a1 restoreAfterBootFailure:(BOOL)a2 percentComplete:(float)a3 timeRemaining:(double)a4;
- (id)restoreServiceWithErrorHandler:(id /* block */)a0;
- (void)_setProgressHandler:(id /* block */)a0 forUUID:(id)a1;

@end
