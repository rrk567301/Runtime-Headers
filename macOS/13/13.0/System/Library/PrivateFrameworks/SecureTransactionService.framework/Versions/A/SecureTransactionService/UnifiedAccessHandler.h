@class NFSession;

@interface UnifiedAccessHandler : STSTransactionHandler {
    NFSession *_nfSession;
}

- (void).cxx_destruct;
- (id)setActiveCredential:(id)a0;
- (id)stopTransaction;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (unsigned char)supportedCredentialType;
- (id)startNFSessionWithCompletion:(id /* block */)a0;

@end
