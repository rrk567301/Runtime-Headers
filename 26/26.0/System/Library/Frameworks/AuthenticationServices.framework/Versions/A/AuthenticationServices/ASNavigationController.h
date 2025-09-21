@class NSTextField, ASNavigationControllerBarView, NSView, NSViewController, NSLayoutConstraint, NSMutableArray, NSButton;
@protocol ASNavigationControllerDelegate;

@interface ASNavigationController : NSViewController {
    ASNavigationControllerBarView *_topNavigationBarView;
    ASNavigationControllerBarView *_bottomNavigationBarView;
    NSView *_paddingView;
    NSView *_navigationContentView;
    NSLayoutConstraint *_paddingHeightLessThanOrEqualConstraint;
    NSLayoutConstraint *_paddingHeightEqualConstraint;
    NSMutableArray *_viewControllerStack;
    BOOL _needsSmoothAnimationMomentaryToggle;
    NSButton *_backButton;
    NSView *_customTitleView;
    NSTextField *_titleTextField;
}

@property (weak) id<ASNavigationControllerDelegate> delegate;
@property (readonly, nonatomic) NSViewController *topViewController;
@property (retain, nonatomic) NSView *customTitleView;

- (void)loadView;
- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 animated:(BOOL)a2;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)_titleTextField;
- (void)_prepareForSmoothAnimation;
- (void)_removeViewController:(id)a0;
- (void)_showBarItemsOfViewController:(id)a0 animated:(BOOL)a1;
- (void)_showViewController:(id)a0 animated:(BOOL)a1;
- (id)_backButton;
- (void)_goBack:(id)a0;
- (void)_refreshBarButtonItemsOfTopViewControllerAnimated:(BOOL)a0;

@end
