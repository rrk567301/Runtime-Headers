@class AMSUICommonNavigationController, AMSUICommonNavigationItem, AMSUICommonView;

@interface AMSUICommonViewController : NSViewController

@property (getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:) BOOL movingFromParentViewController;
@property (readonly, weak) AMSUICommonNavigationController *navigationController;
@property (readonly) AMSUICommonNavigationItem *navigationItem;
@property (retain) AMSUICommonView *view;

+ (BOOL)_isRemoteServiceWindow:(id)a0;
+ (BOOL)_isMacAppStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (void)loadView;
- (void)cancel:(id)a0;
- (void)viewWillLayout;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)_windowDidEndLiveResize:(id)a0;
- (void)_windowDidResize:(id)a0;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)setChildViewController:(id)a0;
- (void)unsetChildViewController:(id)a0;
- (void)setWindowSize:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setNavigationItem:(id)a0;

@end
