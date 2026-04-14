@class NSView, NSString, InlineAuthorizationViewController, SecureWindowLockPolicyEnforcer, NSViewController, NSLayoutConstraint, NSWindow, NSMutableArray;
@protocol PreferencesViewController;

@interface _PasswordsPreferences : PasswordsPreferences <AccountManagerViewControllerDelegate, InlineAuthorizationViewControllerDelegate, SecureWindow> {
    NSLayoutConstraint *_accountsViewControllerWidthConstraint;
    NSLayoutConstraint *_accountsViewControllerHeightConstraint;
    NSMutableArray *_blocksToPerformAfterAuthentication;
}

@property (weak) NSView *containerView;
@property (readonly, weak, nonatomic) NSViewController<PreferencesViewController> *viewController;
@property (readonly, nonatomic) NSViewController<PreferencesViewController> *accountsViewController;
@property (readonly, nonatomic) InlineAuthorizationViewController *authorizationViewController;
@property (readonly, nonatomic) SecureWindowLockPolicyEnforcer *lockPolicyEnforcer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSWindow *windowToSecure;
@property (readonly, nonatomic) BOOL windowToSecureIsMainWindow;

- (id)init;
- (void).cxx_destruct;
- (void)willBeDisplayed;
- (struct CGSize { double x0; double x1; })minSize;
- (void)awakeFromNib;
- (void)initializeFromDefaults;
- (void)moduleWillBeRemoved;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (void)_installViewController:(id)a0 postModuleBeingDisplayed:(BOOL)a1;
- (void)_performBlockAfterAuthentication:(id /* block */)a0;
- (void)_refreshAuthorizationViewController;
- (void)accountManagerViewControllerDoesNotWantLockPolicyDeferral:(id)a0;
- (void)accountManagerViewControllerWantsLockPolicyDeferral:(id)a0;
- (void)controllerAuthorizationDidSucceed:(id)a0;
- (void)lockFromPolicyEnforcer:(id)a0;
- (void)openWithOTPAuthURL:(id)a0 onPageWithURL:(id)a1;
- (void)openWithPasswordManagerURL:(id)a0;
- (id)safariHelpAnchor;

@end
