@interface VUIBaseViewController : NSViewController

- (void)viewDidLayout;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;

@end
