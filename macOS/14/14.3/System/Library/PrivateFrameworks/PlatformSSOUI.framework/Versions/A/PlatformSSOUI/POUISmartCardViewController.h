@class NSTextField, NSProgressIndicator, NSString, NSSecureTextField, NSData, POKeychainHelper, NSAlert, POConfigurationManager, TKTokenWatcher, NSButton;
@protocol POUISmartCardViewControllerDelegate;

@interface POUISmartCardViewController : NSViewController {
    int _notificationToken;
}

@property (weak) NSTextField *messageLabel;
@property (weak) NSTextField *userNameTextField;
@property (weak) NSSecureTextField *passwordTextField;
@property (weak) NSButton *cancelButton;
@property (weak) NSButton *completeButton;
@property (weak) NSProgressIndicator *loginProgressIndicator;
@property (retain) POConfigurationManager *configurationManager;
@property (retain) TKTokenWatcher *tokenWatcher;
@property (retain, nonatomic) NSString *tokenId;
@property (retain, nonatomic) NSData *tokenHash;
@property (retain, nonatomic) NSData *tokenWrapHash;
@property (retain) POKeychainHelper *keychainHelper;
@property (weak) id<POUISmartCardViewControllerDelegate> delegate;
@property (retain) NSAlert *alert;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)cancelClicked:(id)a0;
- (void)completeClicked:(id)a0;
- (void)handleProgressIsRunning:(BOOL)a0;
- (id)showSmartCardPromptForUserName:(id)a0 bind:(BOOL)a1;

@end
