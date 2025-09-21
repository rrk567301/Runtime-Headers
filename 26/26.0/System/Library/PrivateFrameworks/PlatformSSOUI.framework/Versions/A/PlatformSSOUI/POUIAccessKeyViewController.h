@class NSTextField, NSAlert, NSString, NSProgressIndicator, POAuthenticationAccessKeyManager, POConfigurationManager, NSButton;
@protocol POUIAccessKeyViewControllerDelegate;

@interface POUIAccessKeyViewController : NSViewController <POAuthenticationAccessKeyManagerDelegate> {
    int _notificationToken;
}

@property (retain) POConfigurationManager *configurationManager;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) POAuthenticationAccessKeyManager *authenticationManager;
@property (weak) NSTextField *messageLabel;
@property (weak) NSTextField *userNameTextField;
@property (weak) NSButton *cancelButton;
@property (weak) NSProgressIndicator *loginProgressIndicator;
@property (weak) id<POUIAccessKeyViewControllerDelegate> delegate;
@property (retain) NSAlert *alert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)cancelClicked:(id)a0;
- (void)nonceResponseReceived;
- (void)handleProgressIsRunning:(BOOL)a0;
- (id)showAccessKeyPromptForUserName:(id)a0 mode:(unsigned long long)a1;
- (void)startListeningForAccessKeys;

@end
