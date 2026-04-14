@class NSTextField, NSString, NSData, NSSecureTextField, NSArrayController, NSStackView, NSMutableDictionary, POConfigurationManager, NSPopUpButton, POAuthPluginProcess, TKTokenWatcher, NSButton;
@protocol POBuddyAuthenticationViewControllerDelegate;

@interface POBuddyAuthenticationViewController : NSViewController <NSTextFieldDelegate>

@property (readonly, nonatomic) POAuthPluginProcess *systemAuthPluginProcess;
@property (readonly, nonatomic) POAuthPluginProcess *userAuthPluginProcess;
@property (retain) POConfigurationManager *configurationManager;
@property BOOL cancelled;
@property (retain) TKTokenWatcher *tokenWatcher;
@property (retain, nonatomic) NSString *tokenId;
@property (retain, nonatomic) NSData *tokenHash;
@property (retain, nonatomic) NSData *tokenWrapHash;
@property BOOL showingPasswordPrompt;
@property (weak) id<POBuddyAuthenticationViewControllerDelegate> delegate;
@property (weak) NSStackView *authStackView;
@property (weak) NSTextField *messageLabel;
@property (weak) NSTextField *userNameTextField;
@property (weak) NSSecureTextField *passwordTextField;
@property (weak) NSButton *loginCancelButton;
@property (weak) NSButton *loginButton;
@property (weak) NSStackView *passwordStackView;
@property (weak) NSStackView *smartCardStackView;
@property (retain) NSMutableDictionary *smartcardData;
@property (retain) NSArrayController *smartcardArrayController;
@property (weak) NSPopUpButton *smartCardPopup;
@property (retain) NSString *selectedIndex;
@property (weak) NSSecureTextField *pinTextField;
@property (weak) NSButton *usePasswordButton;
@property (weak) NSTextField *selectedCardTextField;
@property BOOL forBinding;
@property BOOL systemSession;
@property BOOL updateLocalAccountPassword;
@property (readonly) BOOL canSwitchAuthMethods;
@property (readonly) BOOL passwordAllowed;
@property (readonly) BOOL smartcardAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)cancelClicked:(id)a0;
- (void)popupDidChange:(id)a0;
- (void)checkEnableLoginButtons;
- (void)configureAuthenticationForUserName:(id)a0 forCreatingNewUser:(BOOL)a1;
- (void)handleSignInProgressIsRunning:(BOOL)a0 waiting:(BOOL)a1;
- (void)loginClicked:(id)a0;
- (void)startListeningForSmartCards;
- (void)switchCredentialClicked:(id)a0;

@end
