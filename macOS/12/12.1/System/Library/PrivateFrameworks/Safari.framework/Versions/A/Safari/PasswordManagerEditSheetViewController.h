@class NSTextField, NSString, NSScrollView, WBSSavedPasswordChangeRequest, NSStackView, WBSSavedPassword, NSLayoutConstraint, NSButton, PasswordsDetailSheetTOTPViewController, NSTableView;
@protocol PasswordManagerEditSheetViewControllerDelegate;

@interface PasswordManagerEditSheetViewController : NSViewController <TableViewPlusDelegate, TableViewPlusDataSource, PasswordsDetailSheetTOTPViewControllerDelegate> {
    NSLayoutConstraint *_websiteLabelBaselineConstraint;
    WBSSavedPasswordChangeRequest *_passwordChangeRequest;
    BOOL _didChangePasswordData;
    BOOL _isBeingDismissed;
}

@property (weak, nonatomic) NSStackView *stackView;
@property (weak, nonatomic) NSTextField *usernameTextField;
@property (weak, nonatomic) NSTextField *passwordTextField;
@property (weak, nonatomic) NSButton *changePasswordOnWebsiteButton;
@property (weak, nonatomic) NSTextField *websiteLabel;
@property (weak, nonatomic) NSButton *deletePasswordButton;
@property (weak, nonatomic) NSButton *saveButton;
@property (weak, nonatomic) NSTableView *tableView;
@property (weak, nonatomic) NSScrollView *scrollView;
@property (weak, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint;
@property (weak, nonatomic) NSTextField *passwordLabel;
@property (retain, nonatomic) PasswordsDetailSheetTOTPViewController *totpTableViewController;
@property (weak, nonatomic) id<PasswordManagerEditSheetViewControllerDelegate> delegate;
@property (readonly, nonatomic) WBSSavedPassword *password;
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
- (id)initWithSavedPassword:(id)a0;
- (void)removeSelectedItems:(id)a0;
- (id)tableView:(id)a0 menuForEvent:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (void)_updateTableViewAppearance;
- (void)_updateUsernameAndPasswordsView;
- (void)_styleAsReadOnlyTextField:(id)a0 withPlaceholderString:(id)a1;
- (void)_copySelectedWebsite;
- (BOOL)_canSaveProposedUsername:(id)a0 password:(id)a1;
- (void)_hideSheet;
- (void)_updateSaveButtonState;
- (void)_confirmCancelingPendingChangesIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)_confirmDeletingPasswordWithCompletionHandler:(id /* block */)a0;
- (void)deletePasswordAfterConfirming:(id)a0;
- (void)passwordsDetailSheetTOTPViewController:(id)a0 addedGenerator:(id)a1;
- (void)passwordsDetailSheetTOTPViewController:(id)a0 deletedGenerator:(id)a1;
- (void)saveButtonClicked:(id)a0;
- (void)changePasswordOnWebsiteButtonClicked:(id)a0;

@end
