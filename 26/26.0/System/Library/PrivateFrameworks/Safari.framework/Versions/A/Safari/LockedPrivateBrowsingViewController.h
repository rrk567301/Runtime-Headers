@class InlineAuthorizationViewController;

@interface LockedPrivateBrowsingViewController : NSViewController <InlineAuthorizationViewControllerDelegate> {
    InlineAuthorizationViewController *_authorizationViewController;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)cancelAuthentication:(id)a0;
- (void)controllerAuthorizationDidSucceed:(id)a0;

@end
