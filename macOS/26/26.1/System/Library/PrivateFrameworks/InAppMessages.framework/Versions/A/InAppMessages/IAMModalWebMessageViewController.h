@class NSButton, IAMWebView;
@protocol IAMViewControllerMetricsDelegate;

@interface IAMModalWebMessageViewController : NSViewController

@property (retain, nonatomic) NSButton *closeButton;
@property (retain, nonatomic) IAMWebView *webView;
@property (weak, nonatomic) id<IAMViewControllerMetricsDelegate> metricsDelegate;
@property (nonatomic) BOOL shouldDisplayCloseButton;

- (void)viewDidLoad;
- (id)initWithWebView:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)_handleCloseButtonTap:(id)a0;

@end
