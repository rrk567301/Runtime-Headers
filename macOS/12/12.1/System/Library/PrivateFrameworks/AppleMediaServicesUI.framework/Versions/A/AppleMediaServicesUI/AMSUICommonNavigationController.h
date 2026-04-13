@class AMSUICommonNavigationBar, NSArray, NSViewController;

@interface AMSUICommonNavigationController : AMSUICommonViewController

@property (readonly) AMSUICommonNavigationBar *navigationBar;
@property (getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property unsigned long long navigationBarStyle;
@property (readonly) NSViewController *topViewController;
@property (readonly) NSArray *viewControllers;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setup;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)initWithRootViewController:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateNavigationBar;
- (void)_presentTopViewController:(id)a0 push:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_dismissViewController:(id)a0 push:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_updateWindowSizeOfViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)previousViewController;
- (void)_backBarButtonItemAction;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;

@end
