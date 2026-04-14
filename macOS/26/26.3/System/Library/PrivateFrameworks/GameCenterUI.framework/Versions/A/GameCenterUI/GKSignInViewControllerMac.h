@protocol GKSignInViewControllerMacDelegate;

@interface GKSignInViewControllerMac : NSViewController

@property (weak) id<GKSignInViewControllerMacDelegate> delegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillDisappear;

@end
