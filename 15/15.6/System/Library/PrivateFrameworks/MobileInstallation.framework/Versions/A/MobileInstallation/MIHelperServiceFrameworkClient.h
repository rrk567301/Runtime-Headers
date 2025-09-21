@class NSXPCConnection;

@interface MIHelperServiceFrameworkClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_invalidateObject;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_sharedConnection;
- (char)createWrappedAppForInstalledBundleIdentifier:(id)a0 atTargetURL:(id)a1 installationInfo:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
- (char)createWrappedAppForInstalledBundleIdentifier:(id)a0 atTargetURL:(id)a1 installationRecords:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
- (id)createWrappedAppForInstalledBundleIdentifier:(id)a0 inTargetDirectory:(id)a1 installationInfo:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
- (id)createWrappedAppForInstalledBundleIdentifier:(id)a0 inTargetDirectory:(id)a1 installationRecords:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
- (id)installMacDeveloperAppAtURL:(id)a0 toURL:(id)a1 targetURLType:(unsigned long long)a2 error:(id *)a3;
- (char)purgeInstallCoordinationPromiseStagingDirectoryForUUID:(id)a0 keepStagingDirectory:(char)a1 error:(id *)a2;
- (char)removeDeveloperAppAtURL:(id)a0 error:(id *)a1;
- (char)removeWrappedAppWithBundleID:(id)a0 atURL:(id)a1 error:(id *)a2;
- (id)updateWrappedAppAt:(id)a0 forInstalledBundleIdentifier:(id)a1 installationInfo:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;
- (id)updateWrappedAppAt:(id)a0 forInstalledBundleIdentifier:(id)a1 installationRecords:(id)a2 onBehalfOf:(struct { unsigned int x0[8]; })a3 error:(id *)a4;

@end
