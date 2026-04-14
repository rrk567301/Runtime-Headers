@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController

@property (retain, nonatomic) OKPageViewController *pageViewController;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)willMoveToParentViewController:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)commonInit;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)prepareForDisplay;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)resolutionDidChange;
- (void)updatePageViewController;

@end
