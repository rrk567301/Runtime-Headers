@class AMSUILoadingView;

@interface AMSUICommonLoadingViewController : AMSUICommonViewController

@property (retain) AMSUILoadingView *loadingView;

- (void)viewDidLoad;
- (void)loadView;
- (void)_setup;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;

@end
