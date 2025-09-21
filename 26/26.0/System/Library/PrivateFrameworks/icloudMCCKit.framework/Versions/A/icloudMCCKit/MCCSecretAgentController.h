@class MCCSecretAgentConnection, _TtC12icloudMCCKit21DomainHelperInterface, NSXPCListener;

@interface MCCSecretAgentController : NSObject <MCCSecretAgentProtocol> {
    MCCSecretAgentConnection *_agentConnection;
    _TtC12icloudMCCKit21DomainHelperInterface *_domainHelperInterface;
    NSXPCListener *_callbackListener;
}

- (id)init;
- (void).cxx_destruct;
- (void)getPKCategoryForDomain:(id)a0 completion:(id /* block */)a1;
- (void)clearAllUserOverridesWithTimestamp:(double)a0 completion:(id /* block */)a1;
- (void)getBlackPearlVersionWithCompletion:(id /* block */)a0;
- (void)isPersonalDomain:(id)a0 completion:(id /* block */)a1;
- (void)predictCommerceEmailWithContext:(id)a0 completion:(id /* block */)a1;
- (void)syncRecategorizationRules:(id)a0 completion:(id /* block */)a1;
- (void)isCategorizationSupportedForLocale:(id)a0 completion:(id /* block */)a1;
- (void)syncNewOldCategoryTimestamps:(id)a0;
- (void)getIsSecureEmailEnabledForEmail:(id)a0 completion:(id /* block */)a1;
- (void)setIsSecureEmailEnabled:(BOOL)a0 forEmail:(id)a1 completion:(id /* block */)a2;
- (void)canSendSecureMessageFrom:(id)a0 to:(id)a1 completion:(id /* block */)a2;
- (void)decryptedDataFromContentData:(id)a0 senderEmail:(id)a1 recipientEmail:(id)a2 completion:(id /* block */)a3;
- (void)encryptedDataFromContentData:(id)a0 senderEmail:(id)a1 recipientEmails:(id)a2 completion:(id /* block */)a3;
- (void)generateSSCertificateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)getIABCategoryID:(id)a0 completion:(id /* block */)a1;
- (id)initWithAgentXPCEndpoint:(id)a0;
- (id)initWithCallbackListener:(id)a0;
- (void)invokeModelDownloadWithCompletion:(id /* block */)a0;
- (void)isModelReadyWithCompletion:(id /* block */)a0;
- (void)listSecItemsWithContext:(id)a0 completion:(id /* block */)a1;
- (void)notifyFullSyncCategoryOverrides:(id)a0;
- (void)notifyNewOldCategoryChange:(id)a0 timestamp:(double)a1;
- (void)notifyWebRule:(id)a0;
- (void)pingWithcompletion:(id /* block */)a0;
- (void)registerCategoryRulesCallbackListener:(id)a0 notificationTypes:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)registerCategoryRulesCallbackWithNotificationTypes:(unsigned long long)a0;
- (void)setCanSendSecureMessageFrom:(id)a0 to:(id)a1 canSend:(BOOL)a2 completion:(id /* block */)a3;
- (void)signedDataFromContentData:(id)a0 senderEmail:(id)a1 recipientEmails:(id)a2 completion:(id /* block */)a3;
- (void)storeSecItemsWithContext:(id)a0 completion:(id /* block */)a1;

@end
