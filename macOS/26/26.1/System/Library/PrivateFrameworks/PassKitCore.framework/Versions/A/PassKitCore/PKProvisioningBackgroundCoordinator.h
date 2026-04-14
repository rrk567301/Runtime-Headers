@class _PKProvisioningBackgroundCoordinator;

@interface PKProvisioningBackgroundCoordinator : NSObject {
    _PKProvisioningBackgroundCoordinator *_coordinator;
}

+ (void)provisionPaymentCredential:(id)a0 forPairedWatch:(BOOL)a1 completion:(id /* block */)a2;

- (void)cancel;
- (void)invalidate;
- (void).cxx_destruct;
- (id)init;
- (id)archivedState;
- (void)startWithCompletion:(id /* block */)a0;
- (void)cleanUpArchivedProvisioningAndInvalidateWithCompletion:(id /* block */)a0;
- (id)initWithSetupContext:(id)a0 credential:(id)a1 previouslyAcceptedTerms:(BOOL)a2;
- (void)setOnRecoverableCheckpointReached:(id /* block */)a0;

@end
