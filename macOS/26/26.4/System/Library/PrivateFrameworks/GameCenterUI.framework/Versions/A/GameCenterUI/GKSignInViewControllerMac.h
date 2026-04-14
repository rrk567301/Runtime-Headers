@protocol GKSignInViewControllerMacDelegate;

@interface GKSignInViewControllerMac : NSViewController

@property (weak) id<GKSignInViewControllerMacDelegate> delegate;

- (void)viewDidAppear;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillDisappear;

@end
