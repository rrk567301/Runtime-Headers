@class GKColorPalette;

@interface GKViewController : UXViewController

@property (retain, nonatomic) GKColorPalette *colorPalette;
@property (nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated;
@property (retain, nonatomic) GKViewController *rootViewController;

- (BOOL)shouldAutorotateToInterfaceOrientation:(int)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)popToRootViewControllerAnimated:(BOOL)a0;
- (BOOL)displayUsingSplitNavigationBar;

@end
