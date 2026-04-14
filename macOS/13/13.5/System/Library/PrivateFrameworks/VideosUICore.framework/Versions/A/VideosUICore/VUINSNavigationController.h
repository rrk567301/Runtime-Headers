@class NSViewController, VUINSNavigationBar, NSScrollView, NSArray, VUINSBarButtonItem;
@protocol VUINSNavigationControllerDelegate;

@interface VUINSNavigationController : NSViewController

@property (retain, nonatomic) NSViewController *rootViewController;
@property (retain, nonatomic) NSViewController *topViewController;
@property (retain, nonatomic) VUINSNavigationBar *navigationBar;
@property (retain, nonatomic) VUINSBarButtonItem *backButtonItem;
@property (retain, nonatomic) NSScrollView *observedContentScrollView;
@property (nonatomic) BOOL isPushing;
@property (weak, nonatomic) id<VUINSNavigationControllerDelegate> delegate;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property (copy, nonatomic) NSArray *viewControllers;
@property (nonatomic) BOOL hidesNavigationBarAtRootViewController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setupCrossFadeFromView:(id)a0 toView:(id)a1;
- (void)_cleanup;
- (void)_doCrossFadeFromView:(id)a0 toView:(id)a1;
- (void)_doSlideAnimation:(unsigned long long)a0 fromView:(id)a1 toView:(id)a2;
- (void)_setupSlideAnimation:(unsigned long long)a0 fromView:(id)a1 toView:(id)a2;
- (void)viewDidLayout;
- (id)initWithRootViewController:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)visibleViewController;
- (void)_addObserversToViewController:(id)a0;
- (void)_removeObserversFromViewController:(id)a0;
- (void)_resetViewControllerBeforeBeingPoppedOutFromNavigationStack:(id)a0;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 action:(unsigned long long)a2 animated:(BOOL)a3 completionHandler:(id /* block */)a4;
- (unsigned long long)_transitionOptionsForAction:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_updateViewControllerBeforeBeingPushedToNavigationStack:(id)a0;
- (void)dismissAllModals:(id /* block */)a0;
- (void)_navigationBarBackButtonClicked;
- (BOOL)__isNavigationBarHidden;
- (void)_animateNavigationbarHidden:(BOOL)a0;
- (void)_contentScrollViewDidScroll:(id)a0;
- (void)_initAndSetUpNavigationBar;
- (void)_observeContentScrollView;
- (void)_updateNavigationBarAppearance;
- (void)setVuiBeingPresented:(BOOL)a0;

@end
