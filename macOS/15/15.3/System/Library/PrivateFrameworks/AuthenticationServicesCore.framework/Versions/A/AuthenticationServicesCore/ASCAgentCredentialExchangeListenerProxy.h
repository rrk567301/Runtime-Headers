@class NSObject, NSXPCConnection;
@protocol OS_os_activity;

@interface ASCAgentCredentialExchangeListenerProxy : NSObject <ASCAgentCredentialExchangeListenerInterface> {
    NSXPCConnection *_connection;
    NSObject<OS_os_activity> *_activity;
}

- (id)init;
- (void).cxx_destruct;
- (id)_reconnectIfNecessary;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_setUpConnection:(id)a0;
- (void)exportCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)importCredentialsWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)setTokenForImport:(id)a0;

@end
