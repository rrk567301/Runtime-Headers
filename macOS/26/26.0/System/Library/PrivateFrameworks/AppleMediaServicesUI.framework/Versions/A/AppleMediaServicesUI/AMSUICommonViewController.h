@class AMSUICommonNavigationController, AMSUICommonNavigationItem, AMSUICommonView;

@interface AMSUICommonViewController : NSViewController

@property (getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:) BOOL movingFromParentViewController;
@property (getter=isMovingToParentViewController, setter=setIsMovingToParentViewController:) BOOL movingToParentViewController;
@property (readonly, weak) AMSUICommonNavigationController *navigationController;
@property (readonly) AMSUICommonNavigationItem *navigationItem;
@property (readonly) AMSUICommonNavigationItem *primaryNavigationItem;
@property (readonly) AMSUICommonNavigationItem *secondaryNavigationItem;
@property struct CGSize { double width; double height; } preferredContentSizeOverride;
@property (retain) AMSUICommonView *view;

+ (BOOL)_isMacAppStore;
+ (BOOL)_isRemoteServiceWindow:(id)a0;

- (void)_registerNotifications;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancel:(id)a0;
- (void)viewWillDisappear;
- (void)viewDidAppear:(BOOL)a0;
- (void)_unregisterNotifications;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLayout;
- (void).cxx_destruct;
- (void)_windowDidEndLiveResize:(id)a0;
- (void)_windowDidResize:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (void)setChildViewController:(id)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setNavigationItem:(id)a0;
- (void)setSecondaryNavigationItem:(id)a0;
- (void)setWindowSize:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)unsetChildViewController:(id)a0;

@end
