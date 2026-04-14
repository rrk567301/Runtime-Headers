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
- (id)initWithListenerEndpoint:(id)a0;
- (void)_connectionInvalidationHandler;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void)_connectionInterruptionHandler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
