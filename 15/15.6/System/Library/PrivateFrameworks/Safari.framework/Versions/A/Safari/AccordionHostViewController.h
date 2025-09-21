@class NSMutableArray, NSString, NSViewController, NSClickGestureRecognizer, NSLayoutConstraint, NSStackView, NSView;
@protocol AccordionHostable;

@interface AccordionHostViewController : NSViewController <NSGestureRecognizerDelegate, AccordionHostableExpansionRequestHandler> {
    NSClickGestureRecognizer *_expandGestureRecognizer;
    NSLayoutConstraint *_leftViewWidthConstraint;
    NSLayoutConstraint *_rightViewWidthConstraint;
    NSLayoutConstraint *_leftViewHeightConstraint;
    NSLayoutConstraint *_rightViewHeightConstraint;
    NSView *_headerView;
    NSView *_footerView;
    unsigned long long _animationsPendingCompletionCount;
    NSMutableArray *_actionsDeferredUntilAnimationCompletion;
}

@property (readonly, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSViewController<AccordionHostable> *leftViewController;
@property (retain, nonatomic) NSViewController<AccordionHostable> *rightViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)appearanceAnimationDuration;
+ (double)expansionAnimationDuration;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)setHeaderView:(id)a0 animated:(char)a1;
- (void)_configureHostedViewController:(id)a0;
- (void)_incrementPendingAnimationCount;
- (long long)_zIndexForView:(id)a0;
- (double)_collapsedWidthForViewController:(id)a0;
- (void)_constrainWidthOfViewOnSide:(long long)a0;
- (void)_constraintsForViewController:(id)a0 outWidthConstraint:(id *)a1 outHeightConstraint:(id *)a2;
- (void)_deactivateAccordionHostWidthConstraints;
- (void)_decrementPendingAnimationCountAndRunDeferredActionsIfNeeded;
- (void)_expandLeftView:(char)a0;
- (void)_expandRightView:(char)a0;
- (void)_insertLeftViewController:(id)a0 animated:(char)a1;
- (void)_insertRightViewController:(id)a0 animated:(char)a1;
- (void)_insertViewController:(id)a0 existingViewController:(id)a1 animated:(char)a2 insertViewBlock:(id /* block */)a3;
- (id)_otherHostedViewControllerForHostedViewController:(id)a0;
- (void)_runUpdateBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 animated:(char)a2 duration:(double)a3;
- (void)_updateWidthConstraintsWithAnimation:(char)a0 expandingViewController:(id)a1 collapsingViewController:(id)a2;
- (char)_viewControllerShouldExpandWhenClicked:(id)a0;
- (char)_viewControllerShouldInitiallyExpand:(id)a0;
- (char)containsViewController:(id)a0;
- (void)expandHostedViewController:(id)a0 animated:(char)a1;
- (void)handleClickGesture:(id)a0;
- (id)initWithLeftViewController:(id)a0 rightViewController:(id)a1;
- (void)insertViewController:(id)a0 side:(long long)a1 animated:(char)a2;
- (void)removeViewController:(id)a0 animated:(char)a1;
- (void)removeViewControllersOfClass:(Class)a0 animated:(char)a1;
- (void)setFooterView:(id)a0 animationMode:(long long)a1;

@end
