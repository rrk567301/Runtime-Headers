@protocol GKSignInViewControllerMacDelegate;

@interface GKSignInViewControllerMac : NSViewController

@property (weak) id<GKSignInViewControllerMacDelegate> delegate;

- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear;
- (void).cxx_destruct;

@end
