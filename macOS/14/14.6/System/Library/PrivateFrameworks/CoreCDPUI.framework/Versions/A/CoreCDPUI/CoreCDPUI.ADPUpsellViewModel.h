@interface CoreCDPUI.ADPUpsellViewModel : NSObject <CDPUIADPUpsellErrorPresenter> {
    void /* unknown type, empty encoding */ _isWalrusEnabled;
    void /* unknown type, empty encoding */ _walrusUnavailableInCurrentRegionMessage;
    void /* unknown type, empty encoding */ _alertState;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ urlBag;
    void /* unknown type, empty encoding */ reachabilityProvider;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)showErrorAlertTitled:(id)a0 message:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
