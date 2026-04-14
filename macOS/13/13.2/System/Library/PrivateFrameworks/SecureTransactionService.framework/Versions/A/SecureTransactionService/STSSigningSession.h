@class STSCredential;

@interface STSSigningSession : STSSessionBase {
    STSCredential *_activeCredential;
}

- (void).cxx_destruct;
- (id)setActiveCredential:(id)a0;
- (id)createHandlerForCredential:(id)a0;
- (id)canStartSession;
- (id)signPeerPayment:(id)a0 authorization:(id)a1 error:(id *)a2;
- (id)_createHandlerForMerchantPaymentSign;
- (id)_createHandlerForPeerPaymentSign;
- (id)signInAppPayment:(id)a0 authorization:(id)a1 error:(id *)a2;

@end
