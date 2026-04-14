@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController

@property (retain, nonatomic) OKPageViewController *pageViewController;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)commonInit;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)a0;
- (void)dealloc;
- (BOOL)prepareForDisplay;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)resolutionDidChange;
- (void)updatePageViewController;

@end
