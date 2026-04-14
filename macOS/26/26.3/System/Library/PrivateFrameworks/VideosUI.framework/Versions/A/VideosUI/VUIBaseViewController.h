@interface VUIBaseViewController : NSViewController

- (void)updateViewConstraints;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (BOOL)isViewInTopMostVisibleViewController;

@end
