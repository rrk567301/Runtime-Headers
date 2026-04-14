@class NSButton, IAMWebView;
@protocol IAMViewControllerMetricsDelegate;

@interface IAMModalWebMessageViewController : NSViewController

@property (retain, nonatomic) NSButton *closeButton;
@property (retain, nonatomic) IAMWebView *webView;
@property (weak, nonatomic) id<IAMViewControllerMetricsDelegate> metricsDelegate;
@property (nonatomic) BOOL shouldDisplayCloseButton;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithWebView:(id)a0;
- (void)_handleCloseButtonTap:(id)a0;

@end
