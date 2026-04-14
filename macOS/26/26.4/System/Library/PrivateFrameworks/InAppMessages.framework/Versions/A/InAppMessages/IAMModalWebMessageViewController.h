@class NSButton, IAMWebView;
@protocol IAMViewControllerMetricsDelegate;

@interface IAMModalWebMessageViewController : NSViewController

@property (retain, nonatomic) NSButton *closeButton;
@property (retain, nonatomic) IAMWebView *webView;
@property (weak, nonatomic) id<IAMViewControllerMetricsDelegate> metricsDelegate;
@property (nonatomic) BOOL shouldDisplayCloseButton;

- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)_handleCloseButtonTap:(id)a0;

@end
