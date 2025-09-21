@class NSScrollView, VUINSNavigationBar, VUINavigationFilterableBridge, VUINSBarButtonItem;

@interface VUINSNavigationController : AMPNavigationController

@property (retain, nonatomic) VUINSNavigationBar *navigationBar;
@property (retain, nonatomic) VUINSBarButtonItem *backButtonItem;
@property (retain, nonatomic) NSScrollView *observedContentScrollView;
@property (retain, nonatomic) VUINavigationFilterableBridge *topFilterBridge;
@property (nonatomic) char isPushing;
@property (nonatomic, getter=isNavigationBarHidden) char navigationBarHidden;
@property (readonly, nonatomic) char isSidebarEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_cleanup;
- (void)viewDidLayout;
- (id)viewControllers;
- (void)setViewControllers:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(char)a1;
- (void)setViewControllers:(id)a0 animated:(char)a1;
- (id)popToViewController:(id)a0 animated:(char)a1;
- (void)_addObserversToViewController:(id)a0;
- (void)_finishPopForController:(id)a0;
- (void)_finishPushForController:(id)a0 animated:(char)a1;
- (void)_removeObserversFromViewController:(id)a0;
- (void)_resetViewControllerBeforeBeingPoppedOutFromNavigationStack:(id)a0;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 action:(unsigned long long)a2 animated:(char)a3 completionHandler:(id /* block */)a4;
- (void)_updateViewControllerBeforeBeingPushedToNavigationStack:(id)a0;
- (id)currentFilterableViewModel;
- (id)filterableViewModelForViewController:(id)a0;
- (void)_navigationBarBackButtonClicked;
- (char)__isNavigationBarHidden;
- (void)_animateNavigationbarHidden:(char)a0;
- (void)_contentScrollViewDidScroll:(id)a0;
- (void)_initAndSetUpNavigationBar;
- (void)_observeContentScrollView;
- (void)_updateNavigationBarAppearance;
- (void)setVuiBeingPresented:(char)a0;

@end
