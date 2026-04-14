@class AKNativeAccountRecoveryController, NSString, NSView, NSImage, NSWindow;
@protocol AKAppleIDAuthenticationInAppContextAlertDelegate, CDPStateUIProvider, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKInAppAuthenticationUIProvider;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <AKAppleIDAuthenticationUIProvider> {
    AKNativeAccountRecoveryController *_nativeRecoveryController;
}

@property (weak, nonatomic) id<AKAppleIDAuthenticationInAppContextAlertDelegate> alertDelegate;
@property (retain, nonatomic) id<AKInAppAuthenticationUIProvider> inAppAuthUIProvider;
@property (retain, nonatomic, setter=_setCdpUiProvider:) id<CDPStateUIProvider> cdpUiProvider;
@property (weak, nonatomic, setter=_setPasswordDelegate:) id<AKAppleIDAuthenticationInAppContextPasswordDelegate> _passwordDelegate;
@property (weak) NSWindow *hostWindow;
@property (retain) NSView *hostView;
@property BOOL makeSheetCritical;
@property BOOL showRememberPasswordCheckbox;
@property (retain) NSString *rememberPasswordCheckboxString;
@property BOOL rememberPassswordCheckedByDefault;
@property BOOL shouldPreventSignIn;
@property long long selectedButton;
@property (retain) NSImage *displayImage;
@property (retain) NSString *initialError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)endCDPView;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)a0;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentKeepUsingUIForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)a0;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentNativeRecoveryUIWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_presentTooManyLoginAttemptsViewWithCompletion:(id /* block */)a0;
- (void)showCDPView:(id)a0 modalForWindow:(id)a1 withController:(id)a2;
- (void)_assertValidPresentingViewController;
- (void)_contextWillBeginPresentingSecondaryUI;
- (void)_contextDidEndPresentingSecondaryUI;
- (void)_dismissServerProvidedUIWithCompletion:(id /* block */)a0;

@end
