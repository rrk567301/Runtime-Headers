@class PKPaymentProvisioningController;
@protocol PKPaymentSetupAssistantContextProtocol;

@interface PKPaymentSetupAssistantCoreController : NSObject {
    id<PKPaymentSetupAssistantContextProtocol> _setupAssistantContext;
}

@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) unsigned long long preflightState;

+ (id)requiredPaymentSetupFileURLs;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSetupAssistantContext:(id)a0;
- (void)_extendedSetupAssistantNeedsToRunWithCompletion:(id /* block */)a0;
- (BOOL)_setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
- (BOOL)_phoneNeedsToRun:(unsigned long long *)a0;
- (BOOL)_bridgeNeedsToRun:(unsigned long long *)a0;
- (BOOL)_macNeedsToRun:(unsigned long long *)a0;
- (void)_preflightPaymentSetupProvisioningController:(id)a0 completion:(id /* block */)a1;
- (id)_bridgeContextDefaultLocalCredential;
- (unsigned long long)_specialCaseSEPassCountInPassLibrary:(id)a0;
- (id)_peerPaymentCredential;
- (id)_provisioningContextWithProvisioningController:(id)a0 setupAssistantCredentials:(id)a1 maximumSelectable:(unsigned long long)a2;
- (id)_setupAssistantCredentialForPaymentCredential:(id)a0;
- (id)_setupAssistantCredentialForPaymentPass:(id)a0;
- (id)_defaultWebService;
- (id)_provisioningControllerWithWebService:(id)a0;
- (void)_expressSetupProvisioningContext:(id /* block */)a0;
- (void)_expressCardRemovalProvisioningContext:(id /* block */)a0;

@end
