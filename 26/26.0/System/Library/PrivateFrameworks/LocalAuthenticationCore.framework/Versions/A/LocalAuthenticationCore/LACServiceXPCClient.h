@class NSString, NSXPCInterface;
@protocol LACServiceXPCEndpointProvider, LACXPCConnection;

@interface LACServiceXPCClient : NSObject <LACXPCConnectionDelegate> {
    id<LACServiceXPCEndpointProvider> _endpointProvider;
    NSXPCInterface *_remoteObjectInterface;
    NSString *_serviceIdentifier;
    id<LACXPCConnection> _connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)connectionDidInvalidate:(id)a0;
- (void)connectionDidActivate:(id)a0;
- (void).cxx_destruct;
- (id)_connectionWithErrorHandler:(id /* block */)a0;
- (void)_handleConnectionClose;
- (void)connectionDidInterrupt:(id)a0;
- (id)initWithEndpointProvider:(id)a0 remoteObjectInterface:(id)a1 serviceIdentifier:(id)a2;

@end
