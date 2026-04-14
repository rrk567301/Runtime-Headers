@interface VUIBaseViewController : NSViewController

- (void)viewDidAppear;
- (void)updateViewConstraints;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayout;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (BOOL)isViewInTopMostVisibleViewController;

@end
