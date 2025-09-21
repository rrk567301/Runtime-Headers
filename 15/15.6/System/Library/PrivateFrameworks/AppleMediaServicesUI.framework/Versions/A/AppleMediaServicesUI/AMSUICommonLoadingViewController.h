@class AMSUILoadingView;

@interface AMSUICommonLoadingViewController : AMSUICommonViewController

@property (retain) AMSUILoadingView *loadingView;

- (void).cxx_destruct;
- (void)_setup;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(char)a0;
- (void)viewWillLayoutSubviews;

@end
