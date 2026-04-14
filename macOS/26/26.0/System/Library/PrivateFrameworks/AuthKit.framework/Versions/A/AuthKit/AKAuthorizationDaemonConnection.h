@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAuthorizationClientProtocol;

@interface AKAuthorizationDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
    id<AKAuthorizationClientProtocol> _contextManager;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)_connection;
- (void)_connectionInvalidationHandler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void)_connectionInterruptionHandler;
- (id)initWithListenerEndpoint:(id)a0 exportedInterface:(id)a1;
- (void).cxx_destruct;

@end
