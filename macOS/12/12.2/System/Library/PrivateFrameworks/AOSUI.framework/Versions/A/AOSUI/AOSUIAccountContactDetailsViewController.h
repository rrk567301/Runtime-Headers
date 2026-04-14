@class NSTextField, NSButton, AALocalContactInfo, NSStackView, NSView, AATrustedContactDetailsViewModel, AOSUICircularImageView;
@protocol AOSUIAccountContactDetailsActionHandler;

@interface AOSUIAccountContactDetailsViewController : AOSUISpyglassBaseViewController

@property (retain) AATrustedContactDetailsViewModel *viewModel;
@property (retain) AALocalContactInfo *contact;
@property (retain) id<AOSUIAccountContactDetailsActionHandler> actionHandler;
@property (weak) NSTextField *titleLabel;
@property (weak) NSTextField *contactNameLabel;
@property (weak) NSTextField *contactEmailLabel;
@property (weak) AOSUICircularImageView *contactProfileImageView;
@property (weak) NSButton *doneButton;
@property (weak) NSTextField *containerTitleLabel;
@property (weak) NSTextField *containerDetailLabel;
@property (weak) NSButton *containerDestructiveButton;
@property (weak) NSButton *containerPrimaryButton;
@property (weak) NSButton *containerSecondaryButton;
@property (weak) NSStackView *containerStackView;
@property (weak) NSView *actionContainer;

- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (id)_authContext;
- (void)doneButtonPressed:(id)a0;
- (id)initWithAccountManager:(id)a0 contact:(id)a1 viewModel:(id)a2 actionHandler:(id)a3;
- (void)configureContactView;
- (void)configureActionContainer;
- (void)_showAuthenticationAlertWithCompletion:(id /* block */)a0;
- (void)destructiveButtonPressed:(id)a0;
- (void)primaryButtonPressed:(id)a0;
- (void)secondaryButtonPressed:(id)a0;

@end
