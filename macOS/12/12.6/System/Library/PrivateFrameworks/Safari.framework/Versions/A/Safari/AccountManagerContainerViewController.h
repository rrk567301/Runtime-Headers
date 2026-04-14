@class NSString, AccountManagerViewController, InlineAuthorizationViewController, SecureWindowLockPolicyEnforcer, WBSSiteMetadataManager, NSViewController, NSWindow, FaviconProvider, WBSAutoFillQuirksManager, NSMutableArray;

@interface AccountManagerContainerViewController : NSViewController <HistoryDelegate, InlineAuthorizationViewControllerDelegate, AccountManagerViewControllerDelegate, SecureWindow> {
    InlineAuthorizationViewController *_authorizationViewController;
    SecureWindowLockPolicyEnforcer *_lockPolicyEnforcer;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSiteMetadataManager *_siteMetadataManager;
    NSMutableArray *_blocksToPerformAfterAuthentication;
}

@property (readonly, nonatomic) InlineAuthorizationViewController *authorizationViewController;
@property (readonly, nonatomic) SecureWindowLockPolicyEnforcer *lockPolicyEnforcer;
@property (readonly, nonatomic) AccountManagerViewController *accountManagerViewController;
@property (readonly, nonatomic) FaviconProvider *_faviconProvider;
@property (readonly, nonatomic) NSViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSWindow *windowToSecure;
@property (readonly, nonatomic) BOOL windowToSecureIsMainWindow;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)lockFromPolicyEnforcer:(id)a0;
- (void)controllerAuthorizationDidSucceed:(id)a0;
- (void)openWithPasswordManagerURL:(id)a0;
- (void)_installViewController:(id)a0;
- (BOOL)historyShouldScheduleMaintenance:(id)a0;
- (void)accountManagerViewControllerWantsLockPolicyDeferral:(id)a0;
- (void)accountManagerViewControllerDoesNotWantLockPolicyDeferral:(id)a0;
- (void)_refreshAuthorizationViewController;
- (void)openWithOTPAuthURL:(id)a0 onPageWithURL:(id)a1;
- (void)_tearDownPasswordsPrefPane;
- (void)_addBlockToPerformAfterAuthentication:(id /* block */)a0;
- (void)_performBlocksAfterSuccessfulAuthentication;
- (void)didSelectPasswordsPrefPane;
- (void)didUnselectPasswordsPrefPane;

@end
