@class PKSubcredentialProvisioningConfiguration, PKAppletSubcredential;

@interface PKSubcredentialProvisioningRegisteringCredentialOperation : PKSubcredentialProvisioningOperation {
    PKAppletSubcredential *_subcredential;
    PKSubcredentialProvisioningConfiguration *_configuration;
}

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithConfiguration:(id)a0 context:(id)a1 delegate:(id)a2;
- (BOOL)canBeRestarted;
- (BOOL)credentialShouldHaveAttestation;

@end
