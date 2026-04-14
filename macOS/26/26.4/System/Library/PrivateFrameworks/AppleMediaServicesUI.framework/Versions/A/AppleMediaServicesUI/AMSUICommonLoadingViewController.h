@class AMSUILoadingView;

@interface AMSUICommonLoadingViewController : AMSUICommonViewController

@property (retain) AMSUILoadingView *loadingView;

- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setup;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
