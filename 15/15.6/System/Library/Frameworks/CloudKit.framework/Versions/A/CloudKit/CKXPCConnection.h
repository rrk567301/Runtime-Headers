@class NSXPCConnection, NSXPCInterface, CKProcessScopedDaemonProxy, NSMutableArray;

@interface CKXPCConnection : NSObject <CKXPCConnectionMuxer> {
    char _hasValidConnection;
    NSXPCConnection *_connection;
    NSMutableArray *_invalidationCompletionHandlers;
}

@property (class, readonly, nonatomic) CKXPCConnection *sharedXPCConnection;
@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonMuxerInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientMuxerInterface;

@property (readonly) int processIdentifier;
@property (readonly, nonatomic) CKProcessScopedDaemonProxy *processScopedDaemonProxy;

- (void)dealloc;
- (void).cxx_destruct;
- (void)activate;
- (void)invalidate:(id /* block */)a0;
- (void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:(id)a0 exportedProxy:(id)a1 synchronous:(char)a2 completionHandler:(id /* block */)a3;
- (void)getDaemonTestServerManagerProxyCreatorSynchronous:(char)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 synchronous:(char)a1 completionHandler:(id /* block */)a2;
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void)getProcessScopedDaemonProxyCreatorSynchronous:(char)a0 completionHandler:(id /* block */)a1;
- (id)initInternal;

@end
