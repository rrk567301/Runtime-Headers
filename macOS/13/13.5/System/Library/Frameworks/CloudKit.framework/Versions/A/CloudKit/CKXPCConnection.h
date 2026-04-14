@class NSXPCConnection, NSXPCInterface;

@interface CKXPCConnection : NSObject <CKXPCConnectionMuxer> {
    BOOL _hasValidConnection;
    NSXPCConnection *_xpcConnection;
}

@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonMuxerInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientMuxerInterface;

@property (readonly, nonatomic) NSXPCConnection *connection;

+ (id)sharedXPCConnection;

- (void).cxx_destruct;
- (id)_init;
- (void)resetConnection;
- (void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:(id)a0 exportedProxy:(id)a1 synchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getDaemonTestServerManagerProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
