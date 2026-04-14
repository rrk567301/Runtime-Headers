@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AKBaseDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)initWithListenerEndpoint:(id)a0;
- (id)_connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_connectionInterruptionHandler;
- (id)XPCInterface;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_connectionInvalidationHandler;
- (void).cxx_destruct;
- (id)machServiceName;
- (id)init;
- (void)dealloc;

@end
