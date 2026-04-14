@class NSTextField, NSView, MiscFormsDataEditor, NSViewController, NSLayoutConstraint, NSButton, CreditCardPreferencesViewController, PasswordsEditor;

@interface AutoFillPreferences : PreferencesModule {
    NSButton *autoFillAddressFieldsCheckBox;
    NSButton *autoFillPasswordsCheckBox;
    NSButton *autoFillOtherFormsCheckBox;
    NSButton *autoFillCreditCardDataCheckBox;
    NSButton *editMyCardButton;
    NSButton *editPasswordsButton;
    NSButton *editOtherFormDataButton;
    NSButton *editCreditCardDataButton;
    MiscFormsDataEditor *miscFormsDataEditor;
    PasswordsEditor *passwordsEditor;
    NSTextField *_autoFillTitle;
    NSLayoutConstraint *_editOtherFormDataButtonBottomLayoutConstraint;
    NSView *_mainContentView;
    NSTextField *_touchIDTextField;
    NSButton *_touchIDToAutoFillCheckBox;
    NSViewController *_dummyViewController;
    CreditCardPreferencesViewController *_creditCardPreferencesViewController;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)willBeDisplayed;
- (void)updateViews;
- (id)safariHelpAnchor;
- (void)_updateTouchIDAvailabilityIfNecessary:(id)a0;
- (void)toggleTouchIDToAutoFill:(id)a0;
- (void)toggleAutoFillAddressFields:(id)a0;
- (void)toggleAutoFillPasswords:(id)a0;
- (void)toggleAutoFillOtherForms:(id)a0;
- (void)toggleAutoFillCreditCardData:(id)a0;
- (void)_setTouchIDToAutoFillEnabled:(BOOL)a0;
- (void)editMyCard:(id)a0;
- (void)editPasswords:(id)a0;
- (void)editOtherFormData:(id)a0;
- (id)_dummyViewController;
- (void)editCreditCardData:(id)a0;
- (void)_updateTouchIDPreferenceVisibility;
- (void)_addTouchIDPreferenceIfNecessary;
- (void)_removeTouchIDPreferenceIfNecessary;
- (BOOL)_isSafariAutoFillEnabledAndTouchIDOnDevice;

@end
