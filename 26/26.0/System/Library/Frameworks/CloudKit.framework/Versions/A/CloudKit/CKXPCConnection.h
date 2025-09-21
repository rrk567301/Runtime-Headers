@class CKAdopterProcessScopedDaemonProxy, NSXPCConnection, NSXPCInterface, CKProcessScopedDaemonProxy, NSMutableArray;
@protocol CKProcessInfo;

@interface CKXPCConnection : NSObject <CKXPCConnectionMuxer> {
    BOOL _hasValidConnection;
    id<CKProcessInfo> _processInfo;
    NSMutableArray *_invalidationCompletionHandlers;
}

@property (class, readonly, nonatomic) CKXPCConnection *sharedXPCConnection;
@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonMuxerInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientMuxerInterface;

@property (readonly) NSXPCConnection *connection;
@property (readonly) int processIdentifier;
@property (readonly, nonatomic) CKProcessScopedDaemonProxy *processScopedDaemonProxy;
@property (readonly, nonatomic) CKAdopterProcessScopedDaemonProxy *adopterProcessScopedDaemonProxy;

- (void)invalidate:(id /* block */)a0;
- (void)getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)getSessionAcquisitionDaemonProxyCreatorForSessionAcquisitionSetupInfo:(id)a0 exportedProxy:(id)a1 synchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getDaemonTestServerManagerProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReferenceProtocol:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getContainerScopedDaemonProxyCreatorForContainerSetupInfo:(id)a0 exportedProxy:(id)a1 synchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)getAdopterProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReferenceProtocol:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithProcessInfo:(id)a0;
- (void)activate;
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
