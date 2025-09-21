@interface PassKitMacHelper.PublishedPaymentSetupCredentialsSectionControllerDelegate : NSObject <PKPaymentSetupCredentialsSectionControllerDelegate> {
    void /* unknown type, empty encoding */ _error;
}

- (id)init;
- (void).cxx_destruct;
- (void)presentRefundFlowForCredential:(id)a0;
- (void)credentialSelectionDidChange;
- (void)presentUnavailableDetailsForCredential:(id)a0;
- (void)setShowNoResultsView:(BOOL)a0;
- (void)showCredentialDeletionError;
- (void)showDeleteConfirmationWithCredential:(id)a0 completion:(id /* block */)a1;
- (void)showMaxSelectionAlertForCredential:(id)a0;
- (void)showUnableToDeleteCredentialError;

@end
