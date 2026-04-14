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
    double _max_presentation_width;
    double _max_presentation_height;
}

@property (weak) id<SOUIAuthorizationViewControllerDelegate> delegate;

- (void)_cancel;
- (void)_updateConstraints;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)preferredContentSizeDidChangeForViewController:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)initWithExtensionViewController:(id)a0 hints:(id)a1;

@end
