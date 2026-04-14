@class NSView, NSString, InlineAuthorizationViewController, SecureWindowLockPolicyEnforcer, NSViewController, NSLayoutConstraint, NSWindow, NSMutableArray;
@protocol PreferencesViewController;

@interface PasswordsPreferences : PreferencesModule <AccountManagerViewControllerDelegate, InlineAuthorizationViewControllerDelegate, SecureWindow> {
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

+ (void)registerDefaults;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })minSize;
- (void)awakeFromNib;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (void)moduleWillBeRemoved;
- (void)initializeFromDefaults;
- (void)willBeDisplayed;
- (id)safariHelpAnchor;
- (void)lockFromPolicyEnforcer:(id)a0;
- (void)controllerAuthorizationDidSucceed:(id)a0;
- (void)openWithPasswordManagerURL:(id)a0;
- (void)accountManagerViewControllerWantsLockPolicyDeferral:(id)a0;
- (void)accountManagerViewControllerDoesNotWantLockPolicyDeferral:(id)a0;
- (void)_performBlockAfterAuthentication:(id /* block */)a0;
- (void)_refreshAuthorizationViewController;
- (void)_installViewController:(id)a0 postModuleBeingDisplayed:(BOOL)a1;
- (void)openWithOTPAuthURL:(id)a0 onPageWithURL:(id)a1;
- (BOOL)snapshotsOfPreferencesWindowArePermitted;

@end
