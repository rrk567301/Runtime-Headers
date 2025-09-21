@class GKColorPalette;

@interface GKViewController : UXViewController

@property (retain, nonatomic) GKColorPalette *colorPalette;
@property (nonatomic) char shouldUpdateContentOnlyWhenAuthenticated;
@property (retain, nonatomic) GKViewController *rootViewController;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(char)a0;
- (void)viewDidAppear:(char)a0;
- (void)popToRootViewControllerAnimated:(char)a0;
- (char)shouldAutorotateToInterfaceOrientation:(int)a0;
- (char)displayUsingSplitNavigationBar;

@end
