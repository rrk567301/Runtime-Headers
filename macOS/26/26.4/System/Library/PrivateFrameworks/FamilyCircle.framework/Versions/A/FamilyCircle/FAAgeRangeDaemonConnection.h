@class NSXPCConnection, NSXPCListenerEndpoint;

@interface FAAgeRangeDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)initWithListenerEndpoint:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_connectionInterruptionHandler;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_connectionInvalidationHandler;

@end
