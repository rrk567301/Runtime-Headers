@interface PKPaymentRegistrationUtilities : NSObject

+ (void)_shouldShowAddCardFlowForWebService:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowWalletInSettingsWithApplePaySupportInformation:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowWalletInDigitalSeparation:(id)a0 withDeviceSpecificCompletion:(id /* block */)a1;
+ (void)shouldShowPasscodeAccessibilityOverride:(id)a0 completion:(id /* block */)a1;
+ (void)configureWebServiceIfNecessary:(id)a0 completion:(id /* block */)a1;
+ (BOOL)_isPaymentSetupSupportedForWebService:(id)a0;
+ (void)shouldShowWalletInBuddy:(id)a0 completion:(id /* block */)a1;
+ (void)registrationIsSupportedInCurrentRegionWithWebService:(id)a0 completion:(id /* block */)a1;
+ (void)_shouldShowAddCardFlowForWebService:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)shouldShowWalletInSettings:(id)a0 completion:(id /* block */)a1;

@end
