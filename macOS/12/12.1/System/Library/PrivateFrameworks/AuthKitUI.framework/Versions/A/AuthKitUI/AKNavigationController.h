@class NSTextField, NSArray, NSView, NSBox, NSLayoutConstraint, NSStackView, NSButton;
@protocol AKNavigationControllerDelegate;

@interface AKNavigationController : NSViewController

@property (copy) NSArray *internalViewControllers;
@property (weak) NSView *navigationBarView;
@property (weak) NSStackView *rightBarStackView;
@property (weak) NSTextField *barTitleTextField;
@property (weak) NSButton *barButton;
@property (weak) NSBox *separator;
@property (weak) NSView *navigationContentView;
@property (weak) NSView *paddingView;
@property (retain) NSLayoutConstraint *paddingHeightLessThanOrEqualConstraint;
@property (retain) NSLayoutConstraint *paddingHeightEqualConstraint;
@property BOOL needsSmoothAnimationMomentaryToggle;
@property (weak) id<AKNavigationControllerDelegate> delegate;
@property (copy) NSArray *viewControllers;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (void)loadView;
- (void)viewDidLoad;
- (id)topViewController;
- (void)_performSmoothAnimation;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)_delegate_willShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 animated:(BOOL)a2;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)_prepareForSmoothAnimation;
- (void)_removeViewController:(id)a0;
- (void)_showViewController:(id)a0 animated:(BOOL)a1;
- (void)_showBarItemsOfViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithRootViewController:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;

@end
