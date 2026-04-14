@class NSTextField, NSString, NSView, NSProgressIndicator, NSStackView, ACUICredentialPromptViewController, NSButton, ACUIAccountDetailsViewController;

@interface ACUIAccountInfoViewController : ACUIViewController <ACUIAccountDataclassDelegate, ACUIAccountInfoViewControllerAccountSyncDelegate>

@property (retain) NSView *headerLogo;
@property (retain) NSView *headerLogoWithDetails;
@property (retain) NSView *headerLogoWithDetailsNoFullName;
@property (retain) NSView *headerGenericAccount;
@property (retain) NSView *enableAccountView;
@property (retain) NSTextField *descriptionField;
@property (retain) NSTextField *fullNameField;
@property (retain) NSView *dataclassesTableViewWithPadding;
@property (retain) NSProgressIndicator *spinner;
@property (retain) ACUIAccountDetailsViewController *accountDetailsVC;
@property (retain) ACUICredentialPromptViewController *credentialPromptVC;
@property (retain) NSStackView *view;
@property (retain) NSString *password;
@property (retain) NSView *dataclassesTableView;
@property (retain) NSButton *helpButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)nibName;
- (void)viewDidAppear;
- (id)initWithAccount:(id)a0;
- (BOOL)willToggleDataclass:(id)a0;
- (void)didToggleDataclass:(id)a0;
- (void)saveAccountFailedWithError:(id)a0;
- (void)saveAccountSucceeded;
- (void)constructViewStack;
- (void)addFullNameSlice;
- (void)addUserNameSliceWithLabel:(id)a0;
- (void)addPasswordSlice;
- (void)addEmailAddressSlice;
- (void)_verifyCredentialAndPromptIfNeeded:(id /* block */)a0;
- (void)saveAccountWithoutVerification:(id)a0;
- (void)addHeaderLogoWithDetailsSlice;
- (void)addHeaderGenericAccountSlice;
- (void)addHeaderLogoSlice;
- (void)addDataClassesConfigurationSlice;
- (void)addDescriptionSlice;
- (void)turnOnAfterVerification;
- (void)addEnableThisAccountSlice;
- (void)addUseWithDataclassSlice;
- (void)detailsButtonClicked:(id)a0;
- (void)didUpdatePassword:(id)a0;

@end
