@class NSStackView, NSButton, WBSSavedAccount, NSScrollView, WBSAutoFillQuirksManager, NSLayoutConstraint, NSString, WBSSavedAccountChangeRequest, AccountDetailSheetTOTPViewController, NSTableView, NSView, PasswordGenerationButton, NSTextField, AccountManagerEditSheetNotesViewController;
@protocol AccountManagerEditSheetViewControllerDelegate;

@interface AccountManagerEditSheetViewController : NSViewController <TableViewPlusDelegate, TableViewPlusDataSource, AccountDetailSheetTOTPViewControllerDelegate, AccountManagerEditSheetNotesViewControllerDelegate, PasswordGenerationButtonDelegate> {
    NSLayoutConstraint *_websiteLabelBaselineConstraint;
    WBSSavedAccountChangeRequest *_passwordChangeRequest;
    BOOL _didChangePasswordData;
    BOOL _isBeingDismissed;
    AccountManagerEditSheetNotesViewController *_notesViewController;
    NSButton *_addPasswordButton;
    BOOL _didPressAddPasswordButton;
    PasswordGenerationButton *_passwordGenerationButton;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
}

@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) NSTextField *usernameTextField;
@property (weak, nonatomic) NSTextField *passwordTextField;
@property (weak, nonatomic) NSButton *changePasswordOnWebsiteButton;
@property (weak, nonatomic) NSTextField *websiteLabel;
@property (weak, nonatomic) NSButton *saveButton;
@property (weak, nonatomic) NSTableView *tableView;
@property (weak, nonatomic) NSScrollView *scrollView;
@property (weak, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint;
@property (weak, nonatomic) NSTextField *passwordLabel;
@property (weak, nonatomic) NSStackView *passwordContainerView;
@property (weak, nonatomic) NSView *passwordFieldsContainerView;
@property (retain, nonatomic) AccountDetailSheetTOTPViewController *totpTableViewController;
@property (readonly, nonatomic) NSString *deleteButtonTitle;
@property (weak, nonatomic) id<AccountManagerEditSheetViewControllerDelegate> delegate;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)hideSheet:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)cancelButtonClicked:(id)a0;
- (void)_updateUsernameAndPasswordsView;
- (void)_textField:(id)a0 changedTextToString:(id)a1;
- (void)_addDeleteButtonWithTitle:(id)a0 toAlert:(id)a1;
- (BOOL)_canChangeSavedAccountWithRequest:(id)a0;
- (void)_confirmCancelingPendingChangesIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)_confirmDeleteWithCompletionHandler:(id /* block */)a0;
- (void)_copySelectedWebsite;
- (void)_hideSheet;
- (void)_insertAddPasswordButton;
- (void)_replaceAddPasswordButtonWithPasswordField;
- (BOOL)_shouldShowTOTPSection;
- (void)_styleAsReadOnlyTextField:(id)a0 withPlaceholderString:(id)a1;
- (void)_updateSaveButtonState;
- (void)_updateTableViewAppearance;
- (void)accountDetailSheetTOTPViewController:(id)a0 addedGenerator:(id)a1;
- (void)accountDetailSheetTOTPViewController:(id)a0 deletedGenerator:(id)a1;
- (void)accountManagerEditSheetNotesViewController:(id)a0 notesTextViewDidChange:(id)a1;
- (void)addAndConfigurePasswordGenerationButton;
- (void)changePasswordOnWebsiteButtonClicked:(id)a0;
- (id)initWithSavedAccount:(id)a0 autoFillQuirksManager:(id)a1;
- (void)passwordGenerationButton:(id)a0 generatedPassword:(id)a1;
- (void)presentDeleteConfirmation:(id)a0;
- (void)removeSelectedItems:(id)a0;
- (void)saveButtonClicked:(id)a0;
- (id)tableView:(id)a0 menuForEvent:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;

@end
