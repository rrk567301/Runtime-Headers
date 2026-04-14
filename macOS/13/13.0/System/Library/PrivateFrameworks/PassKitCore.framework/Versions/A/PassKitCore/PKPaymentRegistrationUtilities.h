@interface PKPaymentRegistrationUtilities : NSObject

+ (void)shouldShowWalletInBuddy:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowWalletInSettings:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowWalletInSettingsWithApplePaySupportInformation:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowWalletInDigitalSeparation:(id)a0 completion:(id /* block */)a1;
+ (void)shouldShowWalletInDigitalSeparation:(id)a0 withDeviceSpecificCompletion:(id /* block */)a1;
+ (void)shouldShowPasscodeAccessibilityOverride:(id)a0 completion:(id /* block */)a1;
+ (void)configureWebServiceIfNecessary:(id)a0 completion:(id /* block */)a1;
+ (BOOL)_isPaymentSetupSupportedForWebService:(id)a0;
+ (void)_shouldShowAddCardFlowForWebService:(id)a0 completion:(id /* block */)a1;
+ (void)registrationIsSupportedInCurrentRegionWithWebService:(id)a0 completion:(id /* block */)a1;

@end
