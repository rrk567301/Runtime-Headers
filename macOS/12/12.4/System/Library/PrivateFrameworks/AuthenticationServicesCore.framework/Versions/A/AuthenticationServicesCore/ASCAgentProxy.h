@class NSString, NSXPCConnection;

@interface ASCAgentProxy : NSObject <ASCAgentProtocol> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_proxy;
- (id)initWithEndpoint:(id)a0;
- (void)reconnectIfNecessary;
- (void)cancelCurrentRequest;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)performAuthorizationRequestsForContext:(id)a0 withClearanceHandler:(id /* block */)a1;
- (void)userSelectedLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginAuthorizationForApplicationIdentifier:(id)a0 fromEndpoint:(id)a1;
- (void)requestCompletedWithCredential:(id)a0 error:(id)a1;
- (void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
- (void)openCABLEURL:(id)a0 fromSourceApplication:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_setUpConnection:(id)a0;

@end
