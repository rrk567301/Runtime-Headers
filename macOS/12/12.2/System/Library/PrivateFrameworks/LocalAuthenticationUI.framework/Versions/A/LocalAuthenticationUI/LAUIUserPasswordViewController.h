@class NSString, NSLayoutConstraint;
@protocol LAUIUserPasswordFieldRemoteProtocol;

@interface LAUIUserPasswordViewController : NSRemoteViewController <LAUIUserPasswordFieldRemoteProtocol, LAUIUserPasswordFieldServiceProtocol> {
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}

@property (weak) id<LAUIUserPasswordFieldRemoteProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestViewControllerWithConnectionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)orderOut;
- (void)setPlaceholderString:(id)a0;
- (void)viewWillLayout;
- (id)serviceViewControllerInterface;
- (void)setUsername:(id)a0;
- (id)serviceViewControllerClassName;
- (id)serviceBundleIdentifier;
- (void)setCanAuthenticateAsAnyAdmin:(BOOL)a0;
- (void)clearPasswordField;
- (void)submitPassword;
- (void)focusPasswordField;
- (void)setExtractablePassword:(BOOL)a0;
- (void)setPINAuthentication:(BOOL)a0;
- (void)setPamUsername:(id)a0;
- (void)setPamService:(id)a0;
- (void)setPamToken:(id)a0;
- (void)setSkipCredentialsVerification:(BOOL)a0;
- (void)setPasswordFieldEnabled:(BOOL)a0;
- (void)setTextAlingmentForBackoffLabel:(long long)a0;
- (void)showBackoffInterval:(double)a0 accountBlocked:(BOOL)a1;
- (void)setFieldStyle:(long long)a0;
- (void)setAttributedPlaceholderString:(id)a0;
- (void)setTabNavigationDisabled:(BOOL)a0;
- (void)externalizedContextInReply:(id /* block */)a0;
- (void)didVerifyPassword;
- (void)didSubmitWrongPassword:(BOOL)a0;
- (void)passwordFieldDidResignFirstResponder;
- (void)requestCancelAuthentication;
- (void)didSubmitUnverifiedData:(unsigned int)a0 completion:(id /* block */)a1;
- (void)didShowAccountBackoffBlocked;
- (void)didShowAccountUnblocked;
- (void)_setLayoutConstraints;

@end
