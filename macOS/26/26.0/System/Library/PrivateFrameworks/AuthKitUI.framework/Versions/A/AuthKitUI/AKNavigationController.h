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
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (copy, nonatomic) NSArray *viewControllers;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewDidLayout;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)_delegate_willShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_performSmoothAnimation;
- (void)_prepareForSmoothAnimation;
- (void)_removeViewController:(id)a0;
- (void)_showBarItemsOfViewController:(id)a0 animated:(BOOL)a1;
- (void)_showViewController:(id)a0 animated:(BOOL)a1;
- (id)topViewController;

@end
