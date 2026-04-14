@class CKXPCConnection, NSXPCInterface;
@protocol NSObject, CKXPCAdopterProcessScopedDaemon;

@interface CKAdopterProcessScopedDaemonProxy : NSObject

@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonAdopterProcessScopedInterface;

@property (retain, nonatomic) id<CKXPCAdopterProcessScopedDaemon> adopterProcessScopedDaemonProxyCreator;
@property BOOL hasValidAdopterProcessScopedDaemonProxyCreator;
@property (retain, nonatomic) id<NSObject> connectionInterruptedObserver;
@property (readonly, weak, nonatomic) CKXPCConnection *connection;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)_getAdopterProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_getAdopterProcessScopedDaemonProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 daemonProxyHandler:(id /* block */)a2;
- (id)globalDeviceIdentifierWithError:(id *)a0;

@end
