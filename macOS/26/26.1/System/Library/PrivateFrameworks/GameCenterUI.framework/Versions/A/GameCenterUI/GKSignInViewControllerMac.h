@protocol GKSignInViewControllerMacDelegate;

@interface GKSignInViewControllerMac : NSViewController

@property (weak) id<GKSignInViewControllerMacDelegate> delegate;

- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)loadView;
- (void)viewDidAppear;
- (void).cxx_destruct;

@end
