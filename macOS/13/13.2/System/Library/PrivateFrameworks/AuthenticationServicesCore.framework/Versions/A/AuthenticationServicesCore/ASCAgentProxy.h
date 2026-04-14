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
- (id)initWithEndpoint:(id)a0;
- (id)_proxy;
- (void)reconnectIfNecessary;
- (void)cancelCurrentRequest;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)performAutoFillAuthorizationRequestsForContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)performAuthorizationRequestsForContext:(id)a0 withClearanceHandler:(id /* block */)a1;
- (void)_setUpConnection:(id)a0;
- (void)requestCompletedWithCredential:(id)a0 error:(id)a1;
- (void)userSelectedLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)beginCABLEPresentationForOperationUUID:(id)a0 viewServiceEndpoint:(id)a1;
- (void)beginAuthorizationForApplicationIdentifier:(id)a0 fromEndpoint:(id)a1;
- (void)clearAllPlatformPublicKeyCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
- (void)getArePasskeysDisallowedForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)openCABLEURL:(id)a0 fromSourceApplication:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
