@protocol AKAlertHandlerUIProvider;

@interface AKAlertHandler : NSObject

@property (class, readonly, nonatomic) AKAlertHandler *sharedInstance;

@property (weak, nonatomic) id<AKAlertHandlerUIProvider> uiProvider;

- (void).cxx_destruct;
- (void)showAlertForError:(id)a0 withCompletion:(id /* block */)a1;
- (void)showAlertForError:(id)a0 withAuthKitAccount:(id)a1 withCompletion:(id /* block */)a2;
- (void)_showAlertForInvalidContextWithCompletion:(id /* block */)a0;
- (void)_showAlertForMissingAppleAccountWithCompletion:(id /* block */)a0;
- (void)_showAlertForAccountNotSupportedWithCompletion:(id /* block */)a0;
- (void)_showAlertForUnverifiedEmailWithCompletion:(id /* block */)a0;
- (void)_showAlertForInsufficientSecurityLevelWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_showAlertForCannotFindServerWithCompletion:(id /* block */)a0;
- (void)_showAlertForUnderageAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)_showAlertForPasscodeSetupWithCompletion:(id /* block */)a0;
- (BOOL)_shouldShowAlertForManagedAccount:(id)a0 error:(id)a1;
- (void)_showAlertForManagedAccount:(id)a0 error:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)showAlert:(id)a0 primaryAction:(id /* block */)a1 altAction:(id /* block */)a2;
- (BOOL)showAlert:(id)a0 primaryAction:(id /* block */)a1 altAction:(id /* block */)a2 cancelAction:(id /* block */)a3;
- (id)notificationDictionaryWithTitle:(id)a0 message:(id)a1 defaultButton:(id)a2 alternateButton:(id)a3;
- (void)_openSpyglass;
- (void)_openPasscodeSetup;
- (void)_openUpgradeAccountSecurityLevelWithBundleID:(id)a0;
- (id)_URLWithString:(id)a0 byAppendingParameters:(id)a1;

@end
