@class NSXPCConnection;

@interface ICLHelperServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_invalidateObject;
- (id)_sharedConnection;
- (id)resolveStagingBaseWithSandboxExtension:(id *)a0 forVolumeUUID:(id)a1 withinStagingSubsystem:(unsigned long long)a2 error:(id *)a3;
- (id)stagingURLWithSandboxExtension:(id *)a0 forSystemContentWithinSubsystem:(unsigned long long)a1 error:(id *)a2;
- (id)stagingURLWithSandboxExtension:(id *)a0 forUserContentWithinSubsystem:(unsigned long long)a1 error:(id *)a2;
- (id)volumeUUIDForURL:(id)a0 error:(id *)a1;

@end
