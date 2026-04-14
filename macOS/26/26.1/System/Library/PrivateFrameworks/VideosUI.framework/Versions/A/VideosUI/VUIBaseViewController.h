@interface VUIBaseViewController : NSViewController

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (BOOL)isViewInTopMostVisibleViewController;

@end
