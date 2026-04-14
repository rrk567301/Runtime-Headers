@class NSTextField, NSString, WBSSavedAccountStore, PasswordGenerationButton, WBSAutoFillQuirksManager, NSButton;
@protocol AddPasswordSheetControllerDelegate;

@interface AddPasswordSheetController : NSWindowController <PasswordGenerationButtonDelegate, NSControlTextEditingDelegate> {
    WBSSavedAccountStore *_accountStore;
    BOOL _preservePendingTextFieldStrings;
    PasswordGenerationButton *_passwordGenerationButton;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
}

@property (weak, nonatomic) NSTextField *websiteTextField;
@property (weak, nonatomic) NSTextField *userNameTextField;
@property (weak, nonatomic) NSTextField *passwordTextField;
@property (weak, nonatomic) NSButton *addButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (readonly, nonatomic, getter=isShowingSheet) BOOL showingSheet;
@property (weak, nonatomic) id<AddPasswordSheetControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (id)windowNibName;
- (void)hideSheetAndPrepareForReinstall;
- (BOOL)_canSaveCurrentlyTypedPassword:(id *)a0;
- (void)_addButtonWasClicked:(id)a0;
- (void)_cancelButtonWasClicked:(id)a0;
- (void)_hideSheet;
- (void)_resetTextFields;
- (id)initWithAccountStore:(id)a0 autoFillQuirksManager:(id)a1;
- (void)passwordGenerationButton:(id)a0 generatedPassword:(id)a1;
- (void)showCannotAddAccountErrorAlertWithErrorCode:(long long)a0 forUserTypedSite:(id)a1 userTypedUsername:(id)a2;
- (void)showSheetInWindow:(id)a0;

@end
