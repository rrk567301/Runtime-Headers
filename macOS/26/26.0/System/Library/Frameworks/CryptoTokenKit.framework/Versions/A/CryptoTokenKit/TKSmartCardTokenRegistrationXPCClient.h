@class NSString;
@protocol TKXPCConnection;

@interface TKSmartCardTokenRegistrationXPCClient : NSObject <TKXPCConnectionDelegate, TKSmartCardTokenRegistrationXPCClient> {
    id<TKXPCConnection> _connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)connectionDidInvalidate:(id)a0;
- (id)_remoteObjectProxy;
- (id)init;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)connectionDidActivate:(id)a0;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxy;
- (id)_connectionWithErrorHandler:(id /* block */)a0;
- (void)_handleConnectionClose;
- (void)connectionDidInterrupt:(id)a0;
- (void)registerSmartCardWithTokenID:(id)a0 promptMessage:(id)a1 callerBundleID:(id)a2 completion:(id /* block */)a3;
- (BOOL)registerSmartCardWithTokenID:(id)a0 promptMessage:(id)a1 callerBundleID:(id)a2 error:(id *)a3;
- (id)registeredSmartCardTokens;
- (void)registeredSmartCardsWithCompletion:(id /* block */)a0;
- (void)unregisterSmartCardWithTokenID:(id)a0 callerBundleID:(id)a1 completion:(id /* block */)a2;
- (BOOL)unregisterSmartCardWithTokenID:(id)a0 callerBundleID:(id)a1 error:(id *)a2;

@end
