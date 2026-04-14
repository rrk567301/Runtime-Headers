@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController

@property (retain, nonatomic) OKPageViewController *pageViewController;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (void)willMoveToParentViewController:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)commonInit;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)prepareForDisplay;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (BOOL)prepareForWarmup;
- (BOOL)prepareForUnload;
- (void)resolutionDidChange;
- (void)updatePageViewController;

@end
