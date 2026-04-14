@class InlineAuthorizationViewController;

@interface LockedPrivateBrowsingViewController : NSViewController <InlineAuthorizationViewControllerDelegate> {
    InlineAuthorizationViewController *_authorizationViewController;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)controllerAuthorizationDidSucceed:(id)a0;

@end
