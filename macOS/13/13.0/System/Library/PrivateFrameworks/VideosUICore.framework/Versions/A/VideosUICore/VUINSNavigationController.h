@class NSViewController, VUINSNavigationBar, NSScrollView, NSArray, VUINSBarButtonItem;
@protocol VUINSNavigationControllerDelegate;

@interface VUINSNavigationController : NSViewController

@property (retain, nonatomic) NSViewController *rootViewController;
@property (retain, nonatomic) NSViewController *topViewController;
@property (retain, nonatomic) VUINSNavigationBar *navigationBar;
@property (retain, nonatomic) VUINSBarButtonItem *backButtonItem;
@property (retain, nonatomic) NSScrollView *observedContentScrollView;
@property (weak, nonatomic) id<VUINSNavigationControllerDelegate> delegate;
@property (nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property (copy, nonatomic) NSArray *viewControllers;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLayout;
- (void)_cleanup;
- (void)_setupSlideAnimation:(unsigned long long)a0 fromView:(id)a1 toView:(id)a2;
- (void)_doSlideAnimation:(unsigned long long)a0 fromView:(id)a1 toView:(id)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)visibleViewController;
- (void)dismissAllModals:(id /* block */)a0;
- (void)setVuiBeingPresented:(BOOL)a0;
- (void)_navigationBarBackButtonClicked;
- (void)_contentScrollViewDidScroll:(id)a0;
- (void)_initAndSetUpNavigationBar;
- (BOOL)__isNavigationBarHidden;
- (void)_resetViewControllerBeforeBeingPoppedOutFromNavigationStack:(id)a0;
- (void)_updateViewControllerBeforeBeingPushedToNavigationStack:(id)a0;
- (void)_removeObserversFromViewController:(id)a0;
- (void)_addObserversToViewController:(id)a0;
- (unsigned long long)_transitionOptionsForAction:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_animateNavigationbarHidden:(BOOL)a0;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 action:(unsigned long long)a2 animated:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_observeContentScrollView;
- (void)_updateNavigationBarAppearance;

@end
