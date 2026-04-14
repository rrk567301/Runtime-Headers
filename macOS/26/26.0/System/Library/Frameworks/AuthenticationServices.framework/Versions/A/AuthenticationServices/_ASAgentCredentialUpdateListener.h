@interface _ASAgentCredentialUpdateListener : NSObject <NSXPCListenerDelegate, _ASCredentialUpdateListenerProtocol> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ internalLock;
    void /* unknown type, empty encoding */ domainsToPartialAccountStore;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)reportAllAcceptedPublicKeyCredentialsForRelyingParty:(id)a0 userHandle:(id)a1 acceptedCredentialIDs:(id)a2 credentialUpdaterOptions:(id)a3 completionHandler:(id /* block */)a4;
- (void)reportPublicKeyCredentialUpdateForRelyingParty:(id)a0 userHandle:(id)a1 newName:(id)a2 credentialUpdaterOptions:(id)a3 completionHandler:(id /* block */)a4;
- (void)reportUnknownPublicKeyCredentialForRelyingParty:(id)a0 credentialID:(id)a1 credentialUpdaterOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)reportUnusedPasswordCredentialForDomain:(id)a0 username:(id)a1 credentialUpdaterOptions:(id)a2 completionHandler:(id /* block */)a3;

@end
