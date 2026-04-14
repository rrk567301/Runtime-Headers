@interface WrappedAMSUIWebViewController : AMSUIWebViewController

@property (copy) id /* block */ dismissBlock;

- (void)updateViewConstraints;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
