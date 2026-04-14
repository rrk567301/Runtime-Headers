@class AuthorizationSheetViewController, SecureWindowLockPolicyEnforcer, NSButton, WBSAutoFillQuirksManager, NSMutableArray, WBSSiteMetadataManager, NSSearchField, NSString, NSWindow, NSArray, NSView, WBSFaviconRequestsController, NSTextField, WBSSavedAccountStore;

@interface AutoFillCredentialPicker : SheetWithTableController <AuthorizationSheetViewControllerDelegate, NSTableViewDataSource, NSTableViewDelegate, SecureWindow, AutoFillCredentialPickerProtocol> {
    NSMutableArray *_allAccountsWithPasswords;
    NSMutableArray *_suggestedAccounts;
    WBSFaviconRequestsController *_iconRequestsController;
    WBSSavedAccountStore *_savedAccountStore;
    WBSSiteMetadataManager *_siteMetadataManager;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    BOOL _isWaitingForIconRequestCancellation;
    long long _purpose;
    NSWindow *_windowPresentingCredentialPicker;
    NSView *_parentView;
}

@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *fillButton;
@property (weak, nonatomic) NSSearchField *searchField;
@property (weak, nonatomic) NSTextField *promptTextField;
@property (retain, nonatomic) NSView *otherPasswordsWindowContentView;
@property (copy, nonatomic) id /* block */ didSelectCredentialToFillHandler;
@property (readonly, nonatomic) SecureWindowLockPolicyEnforcer *lockPolicyEnforcer;
@property (readonly, nonatomic) AuthorizationSheetViewController *authorizationSheetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSWindow *windowToSecure;
@property (readonly, nonatomic) BOOL windowToSecureIsMainWindow;
@property (copy, nonatomic) NSArray *domainHintStringsForPasswordSuggestions;
@property (copy, nonatomic) NSArray *serviceNameHintStringsForPasswordSuggestions;
@property (copy, nonatomic) NSString *suggestedDomainForNewAccount;
@property (nonatomic) BOOL bypassLockoutPolicy;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)hideSheet:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)windowDidLoad;
- (id)windowNibName;
- (BOOL)_confirmCredentialRemoval;
- (void)_installView:(id)a0;
- (id)_passwordForRowIndex:(long long)a0;
- (BOOL)_shouldShowSuggestedPasswords;
- (id)_titleForSectionHeader:(long long)a0;
- (void)_updateCredentialsToDisplay;
- (void)_updateDisplayedPasswords;
- (void)_updateFillAndRemoveButtons;
- (void)authorizationSheetViewControllerDidSucceed:(id)a0;
- (void)authorizationSheetViewControllerWasCancelled:(id)a0;
- (void)fillSelectedItem:(id)a0;
- (void)focusContentSearchField:(id)a0;
- (void)lockFromPolicyEnforcer:(id)a0;
- (void)presentAsChildOfView:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeSelectedItems:(id)a0;
- (void)showSheetInWindow:(id)a0 forPurpose:(long long)a1 savedAccountStore:(id)a2 siteMetadataManager:(id)a3 autoFillQuirksManager:(id)a4 withCompletionHandler:(id /* block */)a5;

@end
