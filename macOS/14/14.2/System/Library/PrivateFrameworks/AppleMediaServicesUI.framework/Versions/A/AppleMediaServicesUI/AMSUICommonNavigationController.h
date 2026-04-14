@class NSArray, NSBox, NSViewController, AMSUICommonNavigationBar;

@interface AMSUICommonNavigationController : AMSUICommonViewController

@property (retain) NSArray *layoutConstraints;
@property (readonly) NSBox *navigationBarSeparator;
@property (readonly) AMSUICommonNavigationBar *navigationBar;
@property (getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property unsigned long long navigationBarStyle;
@property (readonly) NSViewController *topViewController;
@property (retain) NSArray *viewControllers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setup;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)_backBarButtonItemAction:(id)a0;
- (void)_dismissViewController:(id)a0 push:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForNavigationBarStyle:(unsigned long long)a0;
- (BOOL)_isAlertNavigationBarStyle:(unsigned long long)a0;
- (void)_presentTopViewController:(id)a0 push:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_updateNavigationBar;
- (void)_updateWindowSizeOfViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (id)previousViewController;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)updateNavigationBar;

@end
