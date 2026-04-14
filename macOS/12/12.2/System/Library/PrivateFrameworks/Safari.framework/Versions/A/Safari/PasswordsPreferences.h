@class NSView, NSString, InlineAuthorizationViewController, SecureWindowLockPolicyEnforcer, NSViewController, NSLayoutConstraint, NSWindow, NSMutableArray;
@protocol PreferencesViewController;

@interface PasswordsPreferences : PreferencesModule <AggregatedPasswordsViewControllerDelegate, InlineAuthorizationViewControllerDelegate, SecureWindow, PasswordManagerViewControllerDelegate> {
    NSLayoutConstraint *_passwordsViewControllerWidthConstraint;
    NSLayoutConstraint *_passwordsViewControllerHeightConstraint;
    NSMutableArray *_blocksToPerformAfterAuthentication;
}

@property (weak) NSView *containerView;
@property (readonly, weak, nonatomic) NSViewController<PreferencesViewController> *viewController;
@property (readonly, nonatomic) NSViewController<PreferencesViewController> *passwordsViewController;
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
- (void)aggregatePasswordsViewControllerWantsLockPolicyDeferral:(id)a0;
- (void)aggregatePasswordsViewControllerDoesNotWantLockPolicyDeferral:(id)a0;
- (id)safariHelpAnchor;
- (void)lockFromPolicyEnforcer:(id)a0;
- (void)controllerAuthorizationDidSucceed:(id)a0;
- (void)openWithPasswordManagerURL:(id)a0;
- (void)passwordManagerViewControllerWantsLockPolicyDeferral:(id)a0;
- (void)passwordManagerViewControllerDoesNotWantLockPolicyDeferral:(id)a0;
- (void)_performBlockAfterAuthentication:(id /* block */)a0;
- (void)_refreshAuthorizationViewController;
- (void)_installViewController:(id)a0 postModuleBeingDisplayed:(BOOL)a1;
- (void)openWithOTPAuthURL:(id)a0 onPageWithURL:(id)a1;
- (BOOL)snapshotsOfPreferencesWindowArePermitted;

@end
