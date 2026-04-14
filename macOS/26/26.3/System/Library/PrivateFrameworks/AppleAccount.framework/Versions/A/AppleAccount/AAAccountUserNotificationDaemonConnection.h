@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AAAccountUserNotificationDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)_connection;
- (id)initWithListenerEndpoint:(id)a0;
- (void)_connectionInvalidationHandler;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void)_connectionInterruptionHandler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
