@class OKPageViewController;

@interface OKNavigatorFixedViewControllerProxy : OKNavigatorViewController

@property (retain, nonatomic) OKPageViewController *pageViewController;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (void)willMoveToParentViewController:(id)a0;
- (void)commonInit;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(char)a0;
- (char)prepareForDisplay;
- (void)viewDidAppear:(char)a0;
- (void)viewDidDisappear:(char)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(char)a0;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (char)prepareForUnload;
- (char)prepareForWarmup;
- (void)resolutionDidChange;
- (void)updatePageViewController;

@end
