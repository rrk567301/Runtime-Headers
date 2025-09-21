@class AMSUICommonNavigationController, AMSUICommonNavigationItem, AMSUICommonView;

@interface AMSUICommonViewController : NSViewController

@property (getter=isMovingFromParentViewController, setter=setIsMovingFromParentViewController:) char movingFromParentViewController;
@property (getter=isMovingToParentViewController, setter=setIsMovingToParentViewController:) char movingToParentViewController;
@property (readonly, weak) AMSUICommonNavigationController *navigationController;
@property (readonly) AMSUICommonNavigationItem *navigationItem;
@property (readonly) AMSUICommonNavigationItem *primaryNavigationItem;
@property (readonly) AMSUICommonNavigationItem *secondaryNavigationItem;
@property struct CGSize { double width; double height; } preferredContentSizeOverride;
@property (retain) AMSUICommonView *view;

+ (char)_isMacAppStore;
+ (char)_isRemoteServiceWindow:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)_windowDidEndLiveResize:(id)a0;
- (void)_windowDidResize:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLayout;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillLayout;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)viewWillAppear:(char)a0;
- (void)setChildViewController:(id)a0;
- (void)viewDidAppear:(char)a0;
- (void)viewDidDisappear:(char)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(char)a0;
- (void)viewWillLayoutSubviews;
- (void)dismissViewControllerAnimated:(char)a0 completion:(id /* block */)a1;
- (void)setNavigationItem:(id)a0;
- (void)setSecondaryNavigationItem:(id)a0;
- (void)setWindowSize:(struct CGSize { double x0; double x1; })a0 animated:(char)a1 completion:(id /* block */)a2;
- (void)unsetChildViewController:(id)a0;

@end
