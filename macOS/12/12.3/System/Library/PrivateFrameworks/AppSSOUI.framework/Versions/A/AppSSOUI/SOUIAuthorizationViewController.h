@class NSLayoutConstraint, NSArray, NSViewController;
@protocol SOUIAuthorizationViewControllerDelegate;

@interface SOUIAuthorizationViewController : NSViewController {
    NSViewController *_extensionViewController;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSArray *_extensionConstraints;
}

@property (weak) id<SOUIAuthorizationViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)preferredContentSizeDidChangeForViewController:(id)a0;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)_cancel;
- (void)_updateConstraints;
- (id)initWithExtensionViewController:(id)a0 hints:(id)a1;

@end
