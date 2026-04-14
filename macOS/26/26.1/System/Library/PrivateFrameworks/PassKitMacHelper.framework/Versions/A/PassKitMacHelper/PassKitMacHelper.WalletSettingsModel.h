@interface PassKitMacHelper.WalletSettingsModel : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _passes;
    void /* unknown type, empty encoding */ _defaultPass;
    void /* unknown type, empty encoding */ _navigationStackPath;
    void /* unknown type, empty encoding */ _paymentDefaults;
    void /* unknown type, empty encoding */ _hardwareConfigurationModel;
    void /* unknown type, empty encoding */ _contactFormatValidator;
    void /* unknown type, empty encoding */ _orderTrackingEnabled;
    void /* unknown type, empty encoding */ _autofillCardDescriptors;
    void /* unknown type, empty encoding */ _authenticationContext;
    void /* unknown type, empty encoding */ autoFillSettingsAuthPath;
    void /* unknown type, empty encoding */ autoFillSettingsPath;
    void /* unknown type, empty encoding */ _cachedTransactionModelsByUniqueID;
    void /* unknown type, empty encoding */ paymentService;
    void /* unknown type, empty encoding */ _defaults;
    void /* unknown type, empty encoding */ _publishers;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)passLibraryDidChangeWithNotification:(id)a0;
- (void)paymentOptionsDidChange;

@end
