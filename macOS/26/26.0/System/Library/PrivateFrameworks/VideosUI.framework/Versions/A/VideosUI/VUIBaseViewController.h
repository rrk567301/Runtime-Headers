@interface VUIBaseViewController : NSViewController

- (void)updateViewConstraints;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (BOOL)isViewInTopMostVisibleViewController;

@end
