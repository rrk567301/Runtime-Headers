@class GKColorPalette;

@interface GKViewController : UXViewController

@property (retain, nonatomic) GKColorPalette *colorPalette;
@property (nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated;
@property (retain, nonatomic) GKViewController *rootViewController;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)popToRootViewControllerAnimated:(BOOL)a0;
- (BOOL)displayUsingSplitNavigationBar;

@end
