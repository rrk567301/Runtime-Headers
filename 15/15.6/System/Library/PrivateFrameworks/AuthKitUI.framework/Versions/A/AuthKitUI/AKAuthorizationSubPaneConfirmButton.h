@class NSTextField, NSView, NSString, AKAuthorizationPaneContext, AKAuthorizationButton, NSStackView, AKAuthorizationPresentationContext, LAUIAuthenticationView, NSObject;
@protocol OS_dispatch_group, AKAuthorizationSubPaneConfirmButtonDelegate;

@interface AKAuthorizationSubPaneConfirmButton : AKAuthorizationSubPane <LAUIAuthenticationDelegate> {
    id /* block */ _processingStateCompletionHandler;
    NSObject<OS_dispatch_group> *_processingStateGroup;
}

@property (retain, nonatomic) AKAuthorizationPaneContext *context;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;
@property (retain, nonatomic) NSStackView *mainStackView;
@property (readonly, nonatomic) NSView *authorizationButtonContainer;
@property (nonatomic) char hasTouchIDOnly;
@property (nonatomic) char canPerformBiometricValidation;
@property (retain, nonatomic) NSTextField *bioLabel;
@property (retain, nonatomic) LAUIAuthenticationView *bioView;
@property char isPasscodeAuthorizationInProcess;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *bioTextForInactiveState;
@property (readonly, nonatomic) AKAuthorizationButton *authorizationButton;
@property (weak, nonatomic) id<AKAuthorizationSubPaneConfirmButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createMainStackView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_windowDidBecomeKey:(id)a0;
- (id)callerIconBundlePath;
- (id)localizedCallerName;
- (void)_disableBioView;
- (void)_setupBioButtonWithConstraints:(id)a0;
- (void)_waitForTimeInterval:(double)a0 withGroup:(id)a1;
- (id)_bioButtonTitle;
- (char)_hasTouchIDOnly;
- (void)_addArrangedSpaceToMainStackView:(double)a0;
- (id)_authTitle;
- (unsigned long long)_authenticationMechanism;
- (void)_authorizationButtonBioSelected:(id)a0;
- (void)_authorizationButtonExternalAuthenticationSelected:(id)a0;
- (void)_authorizationButtonSkipBioSelected:(id)a0;
- (void)_authorizationButtonWithAccountPasswordSelected:(id)a0;
- (void)_authorizationWithPasscodeButtonSelected:(id)a0;
- (void)_createAccountSelected;
- (char)_delegate_validateReadyForAuthorization;
- (void)_enableLAUIAuthMechanism;
- (void)_enterProcessingStateWithCompletionHandler:(id /* block */)a0;
- (void)_handleBiometricAuthFailureWithError:(id)a0 forContext:(id)a1;
- (void)_initializeAuthorizationButton;
- (char)_isSubscriptionFlow;
- (char)_isUpgradeFromPassword;
- (id)_passcodeButtonTitle;
- (id)_passwordButtonTitle;
- (void)_performPasscodeValidations:(id /* block */)a0;
- (void)_setGlyphViewGestureRecognizerEnabled:(char)a0;
- (void)_setupAlertImageWithConstraints:(id)a0;
- (void)_setupLabelWithTitle:(id)a0 withConstraints:(id)a1 animated:(char)a2;
- (char)_shouldUseSIWAButton;
- (id)_spaceWithConstant:(double)a0;
- (void)_switchToBioView:(char)a0 withEnabled:(char)a1 showAlert:(char)a2 alertString:(id)a3;
- (void)_switchToPasscode;
- (void)_updateLabelWithTitle:(id)a0;
- (void)addToConstraints:(id)a0 context:(id)a1;
- (void)addToStackView:(id)a0 context:(id)a1;
- (void)authenticationResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)bioAuthFailWithAlertString:(id)a0;
- (void)enableAuthorizationCapability:(char)a0;
- (void)finishProcessingWithCompletionHandler:(id /* block */)a0;
- (id)initWithPresentationContext:(id)a0;
- (void)invalidateProcessingState;
- (id)localizedAuthWatchPrompt;
- (void)processAuthenticationSuccessWithCompletionHandler:(id /* block */)a0;
- (void)resetToDefault;
- (void)setUpButtonToPaneContext:(id)a0;
- (void)showAlertAndContinueWithPassword:(char)a0;
- (void)switchToAccountCreation;

@end
