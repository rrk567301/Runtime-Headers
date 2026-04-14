@class NSXPCConnection;

@interface _ASAgentCredentialUpdateListenerProxy : NSObject <_ASCredentialUpdateListenerProtocol> {
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void)_setUpConnection:(id)a0;
- (id)_reconnectIfNecessary;
- (void)reportAllAcceptedPublicKeyCredentialsForRelyingParty:(id)a0 userHandle:(id)a1 acceptedCredentialIDs:(id)a2 credentialUpdaterOptions:(id)a3 completionHandler:(id /* block */)a4;
- (void)reportPublicKeyCredentialUpdateForRelyingParty:(id)a0 userHandle:(id)a1 newName:(id)a2 credentialUpdaterOptions:(id)a3 completionHandler:(id /* block */)a4;
- (void)reportUnknownPublicKeyCredentialForRelyingParty:(id)a0 credentialID:(id)a1 credentialUpdaterOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)reportUnusedPasswordCredentialForDomain:(id)a0 username:(id)a1 credentialUpdaterOptions:(id)a2 completionHandler:(id /* block */)a3;

@end
