@protocol GKSignInViewControllerMacDelegate;

@interface GKSignInViewControllerMac : NSViewController

@property (weak) id<GKSignInViewControllerMacDelegate> delegate;

- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
