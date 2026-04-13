@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {
    id /* block */ _requestToJoinCompletion;
    BOOL _isWaitingForRemoteApproval;
}

- (void).cxx_destruct;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)cancelApproveFromAnotherDevice;
- (void)validateCustodianRecoveryInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)resetAccountCDPState;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (void)setValidSecretHandler:(id /* block */)a0;
- (id)_decoratedDelegate;

@end
