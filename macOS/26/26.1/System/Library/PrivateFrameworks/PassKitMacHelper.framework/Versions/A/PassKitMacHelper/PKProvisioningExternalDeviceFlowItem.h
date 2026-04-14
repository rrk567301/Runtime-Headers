@interface PKProvisioningExternalDeviceFlowItem : NSObject {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ provisionedPasses;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _isCardsOnFileProvisioning;
    void /* unknown type, empty encoding */ _debugConfiguration;
    void /* unknown type, empty encoding */ reporter;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 pass:(id)a1 externalOptions:(id)a2 cardIdentifier:(id)a3;

@end
