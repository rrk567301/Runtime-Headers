@class NSArray, NSBox, NSViewController, AMSUICommonNavigationBar;

@interface AMSUICommonNavigationController : AMSUICommonViewController

@property (retain) NSArray *layoutConstraints;
@property (readonly) NSBox *navigationBarSeparator;
@property (readonly) NSBox *secondaryNavigationBarSeparator;
@property (readonly) AMSUICommonNavigationBar *navigationBar;
@property (getter=isNavigationBarHidden) char navigationBarHidden;
@property unsigned long long navigationBarStyle;
@property (readonly) AMSUICommonNavigationBar *secondaryNavigationBar;
@property (getter=isSecondaryNavigationBarHidden) char secondaryNavigationBarHidden;
@property unsigned long long secondaryNavigationBarStyle;
@property (readonly) NSViewController *topViewController;
@property (retain) NSArray *viewControllers;

+ (char)isAlertNavigationBarStyle:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setup;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)a0;
- (id)popViewControllerAnimated:(char)a0;
- (void)pushViewController:(id)a0 animated:(char)a1;
- (void)setViewControllers:(id)a0 animated:(char)a1;
- (id)_chevronImage;
- (void)_backBarButtonItemAction:(id)a0;
- (void)_dismissViewController:(id)a0 push:(char)a1 animated:(char)a2 completion:(id /* block */)a3;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForNavigationBarStyle:(unsigned long long)a0;
- (void)_presentTopViewController:(id)a0 push:(char)a1 animated:(char)a2 completion:(id /* block */)a3;
- (void)_setNeedsUpdateConstraints;
- (void)_updateNavigationBar;
- (void)_updateNavigationBar:(id)a0 topNavigationItem:(id)a1 navigationBarStyle:(unsigned long long)a2;
- (void)_updateWindowSizeOfViewController:(id)a0 animated:(char)a1 completion:(id /* block */)a2;
- (void)addConstraintsForNavigationBar:(id)a0 separator:(id)a1 style:(unsigned long long)a2 intoLayoutConstraints:(id)a3;
- (id)popToRootViewControllerAnimated:(char)a0;
- (id)popToViewController:(id)a0 animated:(char)a1;
- (id)previousViewController;
- (void)setNavigationBarHidden:(char)a0 animated:(char)a1;
- (void)setSecondaryNavigationBarHidden:(char)a0 animated:(char)a1;
- (void)updateNavigationBar;

@end
