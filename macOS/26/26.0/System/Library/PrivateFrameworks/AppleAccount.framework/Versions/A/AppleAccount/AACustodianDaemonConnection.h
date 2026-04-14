@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface AACustodianDaemonConnection : NSObject <AACustodianDaemonConnectionProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_connection;
- (void)_connectionInvalidationHandler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)a0;
- (id)init;
- (void)_connectionInterruptionHandler;
- (void).cxx_destruct;

@end
