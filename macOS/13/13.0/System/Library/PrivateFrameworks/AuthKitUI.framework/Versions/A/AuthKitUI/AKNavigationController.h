@class NSTextField, NSArray, NSView, NSBox, NSLayoutConstraint, NSStackView, NSButton;
@protocol AKNavigationControllerDelegate;

@interface AKNavigationController : NSViewController

@property (copy, nonatomic) NSArray *internalViewControllers;
@property (weak, nonatomic) NSView *navigationBarView;
@property (weak, nonatomic) NSStackView *rightBarStackView;
@property (weak, nonatomic) NSTextField *barTitleTextField;
@property (weak, nonatomic) NSButton *barButton;
@property (weak, nonatomic) NSBox *separator;
@property (weak, nonatomic) NSView *navigationContentView;
@property (weak, nonatomic) NSView *paddingView;
@property (retain, nonatomic) NSLayoutConstraint *paddingHeightLessThanOrEqualConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paddingHeightEqualConstraint;
@property (nonatomic) BOOL needsSmoothAnimationMomentaryToggle;
@property (weak, nonatomic) id<AKNavigationControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *viewControllers;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)a0;
- (id)topViewController;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 animated:(BOOL)a2;
- (void)_removeViewController:(id)a0;
- (void)_showViewController:(id)a0 animated:(BOOL)a1;
- (void)_delegate_willShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_showBarItemsOfViewController:(id)a0 animated:(BOOL)a1;
- (void)_prepareForSmoothAnimation;
- (void)_performSmoothAnimation;

@end
