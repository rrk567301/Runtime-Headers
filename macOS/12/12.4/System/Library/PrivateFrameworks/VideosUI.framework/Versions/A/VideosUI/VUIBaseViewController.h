@interface VUIBaseViewController : NSViewController

- (void)viewDidLayout;
- (void)loadView;
- (void)updateViewConstraints;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidDisappear;

@end
