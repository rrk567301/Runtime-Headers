@class NSTextField, NSView, NSScrollView, AccountDetailSheetTOTPViewController, NSString, NSStackView, WBSSavedAccountChangeRequest, AccountManagerEditSheetNotesViewController, WBSSavedAccount, NSLayoutConstraint, NSButton, NSTableView;
@protocol AccountManagerEditSheetViewControllerDelegate;

@interface AccountManagerEditSheetViewController : NSViewController <TableViewPlusDelegate, TableViewPlusDataSource, AccountDetailSheetTOTPViewControllerDelegate, AccountManagerEditSheetNotesViewControllerDelegate> {
    NSLayoutConstraint *_websiteLabelBaselineConstraint;
    WBSSavedAccountChangeRequest *_passwordChangeRequest;
    BOOL _didChangePasswordData;
    BOOL _isBeingDismissed;
    AccountManagerEditSheetNotesViewController *_notesViewController;
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
@property (weak, nonatomic) NSView *passwordContainerView;
@property (retain, nonatomic) AccountDetailSheetTOTPViewController *totpTableViewController;
@property (readonly, nonatomic) NSString *deleteButtonTitle;
@property (weak, nonatomic) id<AccountManagerEditSheetViewControllerDelegate> delegate;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)hideSheet:(id)a0;
- (void)cancelButtonClicked:(id)a0;
- (void)accountManagerEditSheetNotesViewController:(id)a0 notesTextViewDidChange:(id)a1;
- (void)removeSelectedItems:(id)a0;
- (id)tableView:(id)a0 menuForEvent:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (void)_hideSheet;
- (void)_updateTableViewAppearance;
- (BOOL)_shouldShowPasswordFields;
- (BOOL)_shouldShowTOTPSection;
- (void)_updateUsernameAndPasswordsView;
- (void)_updateSaveButtonState;
- (void)_styleAsReadOnlyTextField:(id)a0 withPlaceholderString:(id)a1;
- (void)_addDeleteButtonWithTitle:(id)a0 toAlert:(id)a1;
- (id)_deleteConfirmationAlertTitle;
- (id)_deleteConfirmationAlertSubtitle;
- (BOOL)_canSaveProposedUsername:(id)a0 password:(id)a1;
- (void)_confirmCancelingPendingChangesIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)_confirmDeleteWithCompletionHandler:(id /* block */)a0;
- (void)_copySelectedWebsite;
- (void)presentDeleteConfirmation:(id)a0;
- (void)accountDetailSheetTOTPViewController:(id)a0 addedGenerator:(id)a1;
- (void)accountDetailSheetTOTPViewController:(id)a0 deletedGenerator:(id)a1;
- (id)initWithSavedAccount:(id)a0;
- (void)saveButtonClicked:(id)a0;
- (void)changePasswordOnWebsiteButtonClicked:(id)a0;

@end
