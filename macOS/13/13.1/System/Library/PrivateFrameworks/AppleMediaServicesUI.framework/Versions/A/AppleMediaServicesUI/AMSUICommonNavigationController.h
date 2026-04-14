@class NSBox, NSViewController, NSArray, AMSUICommonNavigationBar;

@interface AMSUICommonNavigationController : AMSUICommonViewController

@property (readonly) NSBox *navigationBarSeparator;
@property (readonly) AMSUICommonNavigationBar *navigationBar;
@property (getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property unsigned long long navigationBarStyle;
@property (readonly) NSViewController *topViewController;
@property (retain) NSArray *viewControllers;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setup;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)_backBarButtonItemAction;
- (id)previousViewController;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)updateNavigationBar;
- (void)_dismissViewController:(id)a0 push:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_presentTopViewController:(id)a0 push:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_updateWindowSizeOfViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_updateNavigationBarWithStyle:(unsigned long long)a0;

@end
