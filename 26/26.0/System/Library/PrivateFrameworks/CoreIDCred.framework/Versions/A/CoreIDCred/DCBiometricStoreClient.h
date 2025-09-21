@class NSString, NSXPCConnection;

@interface DCBiometricStoreClient : NSObject <DCBiometricStoreXPCProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (void)bioBindingUnboundACL:(id /* block */)a0;
- (void)boundAppletPresentmentACL:(id /* block */)a0;
- (void)clearProgenitorKeyDesignationsWithCompletion:(id /* block */)a0;
- (id)createDaemonDisconnectedError;
- (void)credentialAuthenticationTokenStatus:(id /* block */)a0;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)a0;
- (void)establishPrearmTrustV2:(id)a0 completion:(id /* block */)a1;
- (void)generatePhoneTokenWithNonce:(id)a0 keyBlob:(id)a1 pairingID:(id)a2 completion:(id /* block */)a3;
- (void)generatePrearmTrustCertificateFromKeyBlob:(id)a0 nonce:(id)a1 pairingID:(id)a2 completion:(id /* block */)a3;
- (void)generatePrearmTrustCertificateWithNonce:(id)a0 pairingID:(id)a1 completion:(id /* block */)a2;
- (void)getCASDCertificate:(id /* block */)a0;
- (void)getGlobalProgenitorKeyAttestation:(id /* block */)a0;
- (void)getGlobalThirdPartyProgenitorKeyAttestation:(id /* block */)a0;
- (void)globalAuthACLTemplateUUIDsWithCompletion:(id /* block */)a0;
- (void)globalAuthACLWithCompletion:(id /* block */)a0;
- (void)migratePrearmTrustBlob:(id)a0 completion:(id /* block */)a1;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)a0;
- (void)passcodeBindingUnboundACL:(id /* block */)a0;
- (void)prearmCredentialWithAuthorizationToken:(id)a0 completion:(id /* block */)a1;
- (void)refreshProgenitorKeyDesignationsWithSessionHandoffToken:(id)a0 onlyIfNeeded:(BOOL)a1 completion:(id /* block */)a2;
- (void)revokeCredentialAuthorizationToken:(id /* block */)a0;
- (void)setGlobalAuthACL:(id)a0 ofType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)setModifiedGlobalAuthACL:(id)a0 externalizedLAContext:(id)a1 completion:(id /* block */)a2;

@end
