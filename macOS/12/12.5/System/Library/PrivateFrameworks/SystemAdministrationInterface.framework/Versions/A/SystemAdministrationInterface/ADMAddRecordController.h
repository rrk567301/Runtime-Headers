@class NSStackView, SFPasswordAssistantInspectorController, NSPopUpButton, ADMLoginPrefs, NSDictionary, NSButton, IndicatorSecureTextField, IndicatorTextField, NSProgressIndicator, NSString, NSLayoutConstraint, NSWindow, NSTextView, NSView, NSTextField, NSPopover;

@interface ADMAddRecordController : NSObject <NSWindowDelegate> {
    NSWindow *mNewUserSheet;
    NSView *mVendedAddUserView;
    NSPopUpButton *mAccountType;
    NSLayoutConstraint *mAccountTypeViewHeightConstraint;
    double mAccountTypeViewHeight;
    NSTextField *mAccountTypeCaption;
    IndicatorTextField *mNewUserFullName;
    NSTextField *mNewUserFullNameCaption;
    NSStackView *mStackView;
    NSButton *mCreateButton;
    NSButton *mCancelButton;
    NSView *mAccountNameView;
    NSTextField *mNewUserNameCaption;
    IndicatorTextField *mNewUserName;
    NSTextField *mNewUserNameSubLabel;
    NSView *mPasswordView;
    NSTextField *mPasswordViewFirstLabel;
    IndicatorSecureTextField *mNewUserPassword;
    IndicatorSecureTextField *mNewUserPasswordVerify;
    NSTextField *mNewUserHint;
    NSProgressIndicator *mNewUserProgressIndicator;
    NSProgressIndicator *mNewUserProgressIndicatorTM;
    NSWindow *mFVTMWarning;
    ADMLoginPrefs *mLoginPrefs;
    NSTextView *mUserTextEditor;
    SFPasswordAssistantInspectorController *mPasswordAssistant;
    NSButton *mNewUserPasswordAssistantButton;
}

@property (retain) NSWindow *hostWindow;
@property (retain) NSPopover *passwordPolicyPopover;
@property (retain) NSDictionary *createAccountOptions;
@property (copy) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorDescriptionForProposedUnixName:(id)a0;
+ (id)addRecordController;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)controlTextDidBeginEditing:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)cancel:(id)a0;
- (void)ok:(id)a0;
- (void)_loadBundle;
- (id)_createUserAccountwithOptions:(id)a0;
- (void)_resetWarningSign;
- (void)paswordAssistant:(id)a0;
- (void)_setAccountTypePopupHidden:(BOOL)a0;
- (void)accountTypeDidChange:(id)a0;
- (void)_addAccountNameView;
- (void)_addPasswordView;
- (void)_updatePasswordUI;
- (void)_prepareWithOptions:(id)a0;
- (void)_okActionWithStage:(unsigned char)a0;
- (id)_createUserAccount:(BOOL)a0 administrator:(BOOL)a1 options:(id)a2;
- (id)_createIdentity;
- (id)_createGroup;
- (void)_warnAboutAutoLogin;
- (BOOL)_isStackViewHidden:(id)a0;
- (void)runAddUserSheetForWindow:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)addUserViewWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)fvtmOk:(id)a0;
- (void)fvtmCancel:(id)a0;
- (void)help:(id)a0;
- (void)agepresetAction:(id)a0;

@end
