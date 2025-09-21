@class PKPaymentProvisioningController;
@protocol PKPaymentSetupAssistantContextProtocol;

@interface PKPaymentSetupAssistantCoreController : NSObject {
    id<PKPaymentSetupAssistantContextProtocol> _setupAssistantContext;
}

@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) unsigned long long preflightState;
@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) unsigned long long preflightState;

+ (id)requiredPaymentSetupFileURLs;

- (id)description;
- (void).cxx_destruct;
- (char)_macNeedsToRun:(unsigned long long *)a0;
- (id)_bridgeContextDefaultLocalCredential;
- (char)_bridgeNeedsToRun:(unsigned long long *)a0;
- (id)_defaultWebService;
- (void)_expressCardRemovalProvisioningContext:(id /* block */)a0;
- (void)_expressSetupProvisioningContext:(id /* block */)a0;
- (void)_extendedSetupAssistantNeedsToRunWithCompletion:(id /* block */)a0;
- (char)_hasManuallyAddedSecureElementPasses:(char)a0;
- (id)_peerPaymentCredential;
- (char)_phoneNeedsToRun:(unsigned long long *)a0;
- (void)_preflightPaymentSetupProvisioningController:(id)a0 completion:(id /* block */)a1;
- (id)_provisioningContextWithProvisioningController:(id)a0 setupAssistantCredentials:(id)a1 maximumSelectable:(unsigned long long)a2;
- (id)_provisioningControllerWithWebService:(id)a0;
- (id)_setupAssistantCredentialForPaymentCredential:(id)a0;
- (id)_setupAssistantCredentialForPaymentPass:(id)a0;
- (char)_setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
- (unsigned long long)_specialCaseSEPassCountInPassLibrary:(id)a0;
- (id)initWithSetupAssistantContext:(id)a0;

@end
