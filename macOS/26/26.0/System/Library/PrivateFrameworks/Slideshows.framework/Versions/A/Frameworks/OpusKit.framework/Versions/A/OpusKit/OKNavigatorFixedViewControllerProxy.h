@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController

@property (retain, nonatomic) OKPageViewController *pageViewController;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)commonInit;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (BOOL)prepareForDisplay;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)a0;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)resolutionDidChange;
- (void)updatePageViewController;

@end
