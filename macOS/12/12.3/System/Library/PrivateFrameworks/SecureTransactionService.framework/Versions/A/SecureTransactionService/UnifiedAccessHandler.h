@class NFSession;

@interface UnifiedAccessHandler : STSTransactionHandler {
    NFSession *_nfSession;
}

- (void).cxx_destruct;
- (id)setActiveCredential:(id)a0;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (id)stopTransaction;
- (id)activateWithDelegate:(id)a0 handoffToken:(id)a1;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (unsigned char)supportedCredentialType;

@end
