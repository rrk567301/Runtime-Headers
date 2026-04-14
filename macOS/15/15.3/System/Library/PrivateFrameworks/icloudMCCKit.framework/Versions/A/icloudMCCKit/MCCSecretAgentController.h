@class MCCSecretAgentConnection, NSXPCListener;

@interface MCCSecretAgentController : NSObject <MCCSecretAgentProtocol> {
    MCCSecretAgentConnection *_agentConnection;
    NSXPCListener *_callbackListener;
}

- (id)init;
- (void).cxx_destruct;
- (void)predictCommerceEmailWithContext:(id)a0 completion:(id /* block */)a1;
- (void)listCertificatesWithCompletion:(id /* block */)a0;
- (void)clearAllUserOverridesWithTimestamp:(double)a0 completion:(id /* block */)a1;
- (void)createWebRule:(id)a0 completion:(id /* block */)a1;
- (void)fetchSigningAndEncryptingStatusForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)fetchSigningAndEncrytionMessagesStatusForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)generateCertificateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)getBlackPearlVersionWithCompletion:(id /* block */)a0;
- (void)getIABCategoryID:(id)a0 completion:(id /* block */)a1;
- (id)initWithAgentXPCEndpoint:(id)a0;
- (id)initWithCallbackListener:(id)a0;
- (void)invokeModelDownloadWithCompletion:(id /* block */)a0;
- (void)isModelReadyWithCompletion:(id /* block */)a0;
- (void)isPersonalDomain:(id)a0 completion:(id /* block */)a1;
- (void)listCertificatesForEmail:(id)a0 completion:(id /* block */)a1;
- (void)notifyWebRule:(id)a0 completion:(id /* block */)a1;
- (void)pingWithcompletion:(id /* block */)a0;
- (void)refreshCertificateWithContext:(id)a0 certId:(id)a1 completion:(id /* block */)a2;
- (void)registerCategoryRulesCallback;
- (void)registerCategoryRulesCallbackListener:(id)a0 completion:(id /* block */)a1;
- (void)sendPendingRulesWithType:(id)a0 completion:(id /* block */)a1;
- (void)setEncryptIsEnabled:(BOOL)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)setSignIsEnabled:(BOOL)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)setSigningAndEncrytingStatusTo:(BOOL)a0 forEmailAddress:(id)a1 completion:(id /* block */)a2;
- (void)syncRecategorizationRules:(id)a0 completion:(id /* block */)a1;
- (void)syncToWeb:(id)a0;
- (void)updateCertificateDefaultsForEmailAddress:(id)a0 certInfo:(id)a1 completion:(id /* block */)a2;

@end
