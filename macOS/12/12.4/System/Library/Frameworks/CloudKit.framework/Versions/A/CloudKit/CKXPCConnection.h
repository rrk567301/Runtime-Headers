@class NSXPCConnection;

@interface CKXPCConnection : NSObject <CKXPCConnectionMuxer> {
    BOOL _hasValidConnection;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, nonatomic) NSXPCConnection *connection;

+ (id)sharedXPCConnection;
+ (id)CKXPCClientToDaemonMuxerInterface;
+ (id)CKXPCDaemonToClientMuxerInterface;

- (void).cxx_destruct;
- (id)_init;
- (void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:(id)a0 exportedProxy:(id)a1 synchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)resetConnection;
- (void)getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReference:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)getTestAdminDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
