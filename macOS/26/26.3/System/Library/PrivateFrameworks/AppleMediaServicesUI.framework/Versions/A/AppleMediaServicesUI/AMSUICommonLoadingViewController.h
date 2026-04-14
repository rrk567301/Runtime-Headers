@class AMSUILoadingView;

@interface AMSUICommonLoadingViewController : AMSUICommonViewController

@property (retain) AMSUILoadingView *loadingView;

- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_setup;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;

@end
