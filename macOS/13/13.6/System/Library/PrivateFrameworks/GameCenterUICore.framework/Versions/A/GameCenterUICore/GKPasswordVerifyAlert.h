@class NSTextField, NSString, NSView, NSButton;

@interface GKPasswordVerifyAlert : _GKAlert <NSTextFieldDelegate>

@property (copy) NSString *username;
@property (retain) NSView *loginView;
@property (retain) NSTextField *accountLabel;
@property (retain) NSTextField *accountField;
@property (retain) NSTextField *passwordLabel;
@property (retain) NSTextField *passwordField;
@property (retain) NSButton *createAccountButton;
@property (retain) NSButton *forgotPasswordButton;
@property (readonly) NSString *password;
@property (nonatomic) long long environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)password;
- (void)setPassword:(id)a0;
- (void)dismiss;
- (void)controlTextDidChange:(id)a0;
- (void)updateButtons;
- (id)username;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (void)createAppleID:(id)a0;
- (id)initWithUsername:(id)a0 delegate:(id)a1;
- (void)invokeIForgot:(id)a0;

@end
