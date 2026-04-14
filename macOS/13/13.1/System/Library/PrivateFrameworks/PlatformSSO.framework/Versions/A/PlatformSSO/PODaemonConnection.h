@class NSString, NSXPCConnection;

@interface PODaemonConnection : NSObject <PODaemonProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_connectToService;
- (void)deviceConfigurationForExtension:(id)a0 completion:(id /* block */)a1;
- (void)saveDeviceConfiguration:(id)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)removeDeviceConfigurationForExtension:(id)a0 completion:(id /* block */)a1;
- (void)loginConfigurationForExtension:(id)a0 completion:(id /* block */)a1;
- (void)saveLoginConfiguration:(id)a0 forExtension:(id)a1 completion:(id /* block */)a2;
- (void)removeLoginConfigurationForExtension:(id)a0 completion:(id /* block */)a1;
- (void)userConfigurationForIdentifier:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)saveUserConfiguration:(id)a0 forIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)removeUserConfigurationForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetStoredConfigurationWithCompletion:(id /* block */)a0;
- (void)enablePlatformSSORuleForScreensaver:(id /* block */)a0;
- (void)disablePlatformSSORuleForScreensaver:(id /* block */)a0;

@end
