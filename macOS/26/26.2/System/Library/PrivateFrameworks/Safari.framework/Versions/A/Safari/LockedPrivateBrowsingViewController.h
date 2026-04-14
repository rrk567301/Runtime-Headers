@class InlineAuthorizationViewController;

@interface LockedPrivateBrowsingViewController : NSViewController <InlineAuthorizationViewControllerDelegate> {
    InlineAuthorizationViewController *_authorizationViewController;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)cancelAuthentication:(id)a0;
- (void)controllerAuthorizationDidSucceed:(id)a0;

@end
