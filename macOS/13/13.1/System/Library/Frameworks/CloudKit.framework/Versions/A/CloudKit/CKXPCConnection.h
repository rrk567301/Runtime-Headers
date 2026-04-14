@class NSXPCConnection;

@interface CKXPCConnection : NSObject <CKXPCConnectionMuxer> {
    BOOL _hasValidConnection;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, nonatomic) NSXPCConnection *connection;

+ (id)sharedXPCConnection;
+ (id)CKXPCClientToDaemonMuxerInterface;
+ (id)CKXPCDaemonToClientMuxerInterface;

- (id)_init;
- (void).cxx_destruct;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReference:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:(id)a0 exportedProxy:(id)a1 synchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getTestAdminDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)resetConnection;

@end
