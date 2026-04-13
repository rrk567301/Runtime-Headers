@class NSTextField, ContentHuggingTextView, NSScrollView, PasswordsDetailSheetTOTPViewController, NSString, NSSharingService, NSWindow, WBSSavedPassword, NSClipView, NSImageView, NSLayoutConstraint, NSButton;
@protocol PasswordsDetailSheetControllerDecisionHandler, PasswordsAuditingHandler;

@interface PasswordsDetailSheetController : SheetWithTableController <NSSharingServiceDelegate, TableViewPlusDataSource, TableViewPlusDelegate, NSTextViewDelegate> {
    NSSharingService *_sharingService;
    NSWindow *_airDropWindow;
}

@property (weak, nonatomic) NSTextField *websiteLabel;
@property (weak, nonatomic) NSTextField *usernameTextField;
@property (weak, nonatomic) NSTextField *passwordTextField;
@property (weak, nonatomic) NSButton *okButton;
@property (weak, nonatomic) NSButton *shareButton;
@property (weak, nonatomic) NSScrollView *scrollView;
@property (weak, nonatomic) NSLayoutConstraint *scrollViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *passwordReusedWarningTopConstraint;
@property (weak, nonatomic) NSTextField *passwordLabel;
@property (weak, nonatomic) NSImageView *passwordReusedWarningImageView;
@property ContentHuggingTextView *passwordReusedWarningLabel;
@property (weak, nonatomic) NSScrollView *passwordReusedWarningLabelEnclosingScrollView;
@property (weak, nonatomic) NSClipView *passwordReusedWarningLabelEnclosingClipView;
@property (retain, nonatomic) PasswordsDetailSheetTOTPViewController *totpTableViewController;
@property (weak, nonatomic) id<PasswordsDetailSheetControllerDecisionHandler> delegate;
@property (readonly, nonatomic) WBSSavedPassword *password;
@property (weak, nonatomic) id<PasswordsAuditingHandler> passwordAuditingHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)windowNibName;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (void)windowDidLoad;
- (void)hideSheet:(id)a0;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithSavedPassword:(id)a0;
- (void)sharingServiceWindowDidBecomeMain:(id)a0;
- (void)sharingServiceWindowDidResignMain:(id)a0;
- (void)showSheetInWindow:(id)a0;
- (void)removeSelectedItems:(id)a0;
- (id)tableView:(id)a0 menuForEvent:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (void)_updateTableViewAppearance;
- (void)_updateUsernameAndPasswordsView;
- (void)_styleAsReadOnlyTextField:(id)a0 withPlaceholderString:(id)a1;
- (void)_copySelectedWebsite;
- (BOOL)_confirmRemovingSelectedIndexes:(id)a0;
- (BOOL)_canSaveProposedUsername:(id)a0 password:(id)a1;
- (void)sharePassword:(id)a0;

@end
