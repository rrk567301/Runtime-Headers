@interface VUIBaseViewController : NSViewController

- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)updateViewConstraints;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (BOOL)isViewInTopMostVisibleViewController;

@end
