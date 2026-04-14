@class AKAuthenticationPromptController, NSString, ASWebAuthenticationSession, AKAppleIDAuthenticationInAppContext;

@interface AKInAppAuthenticationMacOSUIProvider : NSObject <ASWebAuthenticationPresentationContextProviding, AKInAppAuthenticationUIProvider> {
    AKAppleIDAuthenticationInAppContext *_context;
    AKAppleIDAuthenticationInAppContext *_largePromptSheetContext;
    AKAuthenticationPromptController *_authenticationPrompt;
    int _numberOfAttempts;
    ASWebAuthenticationSession *_webAuthenticationSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
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
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (void)_setupAuthenticationPromptControllerAtMode:(long long)a0;
- (void)_updateButtonActionForSignInPrompt:(id)a0 withLoginCompletion:(id /* block */)a1;
- (void)_updateUI:(id /* block */)a0;
- (void)presentTooManyLoginAttemptsViewWithCompletion:(id /* block */)a0;
- (void)presentIDPProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)presentCDPView:(id)a0 withContext:(id)a1 modalForWindow:(id)a2 withController:(id)a3;
- (void)dismissCDPUI;

@end
