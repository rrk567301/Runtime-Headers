@class NSView, NSString, NSLayoutConstraint;
@protocol LAUIUserPasswordFieldRemoteProtocol;

@interface LAUIUserPasswordViewController : NSRemoteViewController <LACUIAuthenticationDialogPasswordFieldProvider, LACUIUserPasswordViewController, LAUIUserPasswordFieldRemoteProtocol, LAUIUserPasswordFieldServiceProtocol, _LAUIAuthenticationDialogPasswordFieldProvider> {
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}

@property (readonly, nonatomic) NSView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ keyboardEventHandler;
@property (weak) id<LAUIUserPasswordFieldRemoteProtocol> delegate;
@property (readonly, nonatomic) BOOL invalid;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSView *view;

+ (void)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (id)exportedInterface;
- (void)dealloc;
- (void)setUsername:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)orderOut;
- (id)serviceViewControllerInterface;
- (void)setPlaceholderString:(id)a0;
- (void)viewWillLayout;
- (void)setAuthenticator:(long long)a0;
- (id)serviceBundleIdentifier;
- (id)serviceViewControllerClassName;
- (void)setCanAuthenticateAsAnyAdmin:(BOOL)a0;
- (void)clearPasswordField;
- (void)setAttributedPlaceholderString:(id)a0;
- (void)setPamUsername:(id)a0;
- (void)setSkipCredentialsVerification:(BOOL)a0;
- (void)_setLayoutConstraints;
- (void)didRequestSubmit;
- (void)didShowAccountBackoffBlocked;
- (void)didShowAccountUnblocked;
- (void)didSubmitUnverifiedData:(unsigned int)a0 completion:(id /* block */)a1;
- (void)didSubmitWrongPassword:(BOOL)a0;
- (void)didVerifyPassword;
- (void)didVerifyPasswordForUserId:(unsigned int)a0;
- (void)externalizedContextInReply:(id /* block */)a0;
- (void)focusPasswordField;
- (void)passwordDidChange;
- (void)passwordFieldDidResignFirstResponder;
- (void)requestCancelAuthentication;
- (void)setExtractablePassword:(BOOL)a0;
- (void)setFieldStyle:(long long)a0;
- (void)setPINAuthentication:(BOOL)a0;
- (void)setPamService:(id)a0;
- (void)setPamToken:(id)a0;
- (void)setPasswordFieldEnabled:(BOOL)a0;
- (void)setShouldAutosubmit:(BOOL)a0;
- (void)setTabNavigationDisabled:(BOOL)a0;
- (void)setTextAlingmentForBackoffLabel:(long long)a0;
- (void)showBackoffInterval:(double)a0 accountBlocked:(BOOL)a1;
- (void)submitPassword;

@end
