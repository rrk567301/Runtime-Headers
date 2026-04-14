@class AKAppleIDAuthenticationController, NSWindow, NSImage, CDPUIDeviceToDeviceEncryptionFlowContext;
@protocol CDPUIDeviceToDeviceEncryptionHelperDelegate;

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject

@property (retain, nonatomic) AKAppleIDAuthenticationController *authController;
@property (retain, nonatomic) CDPUIDeviceToDeviceEncryptionFlowContext *context;
@property (weak) NSWindow *hostWindow;
@property (weak) NSImage *displayImage;
@property (weak, nonatomic) id<CDPUIDeviceToDeviceEncryptionHelperDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)initWithWindow:(id)a0;
- (id)_hostWindow;
- (id)_authController;
- (id)_displayImage;
- (void)_executeSyncOnMainThreadIfNeeded:(id /* block */)a0;
- (BOOL)_hasPasscode;
- (void)_setupPresentedViewController;
- (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)a0;
- (void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(id /* block */)a0;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)a0 withCompletion:(id /* block */)a1;
- (id)_encryptionErrorFromError:(id)a0;
- (void)_showUpgradeMessageWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_preflightDeviceToDeviceEncryptionWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_hasManatee;
- (BOOL)_isInCircle;
- (void)_checkEligibilityWithCompletionForContext:(id)a0 completion:(id /* block */)a1;
- (void)_isAccount2FAForAltDSID:(id)a0 completion:(id /* block */)a1;
- (id)_authContextFromContext:(id)a0;
- (id)_inAppContextFromContext:(id)a0;
- (void)_validateLocalSecretAndRepairCDPWithAuthResults:(id)a0 withCompletion:(id /* block */)a1;
- (void)_presentCDPUpgradeSpinnerWithCompletion:(id /* block */)a0;
- (void)_presentIneligibleAlertWithCompletion:(id /* block */)a0;
- (void)_legacyAskPermissionToContinueFlowWithCompletion:(id /* block */)a0;
- (id)_upgradeUIProvider;
- (void)_repairCDPWithAuthResults:(id)a0 cachedSecret:(id)a1 withCompletion:(id /* block */)a2;
- (void)_createPasscodeWithCompletion:(id /* block */)a0;
- (void)_shouldContinueCreationWithCompletion:(id /* block */)a0;
- (void)_postBiometricFollowupIfNeeded;
- (id)_cdpStateControllerWithAuthResults:(id)a0;
- (id)_cdpContextForPrimaryAccountWithAuthenticationResults:(id)a0;
- (id)_cdpStateControllerWithContext:(id)a0;
- (void)_configurePresentingViewControllerForModalPresentation;

@end
