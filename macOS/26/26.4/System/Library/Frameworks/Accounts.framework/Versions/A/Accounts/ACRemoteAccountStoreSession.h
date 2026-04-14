@class NSXPCListenerEndpoint, NSString, NSXPCConnection, ACAccountStoreClientSideListener;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    ACAccountStoreClientSideListener *_clientSideListener;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) NSString *effectiveBundleID;
@property (nonatomic) BOOL notificationsEnabled;

- (id)initWithListenerEndpoint:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_connection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (void)_locked_connection:(id)a0 setEffectiveBundleID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_locked_connection:(id)a0 setNotificationsEnabled:(BOOL)a1;
- (void)dealloc;
- (void)_setConnectionInvalidated;
- (void)_setConnectionInterrupted;
- (void)_locked_configureRemoteAccountStoreWithConnection:(id)a0;

@end
