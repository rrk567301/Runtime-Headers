@class BCProgressIndicatorView, NSString, NSURL, BCServerErrorView, WKWebView, BCInvalidCertificatView;
@protocol BCWebViewControllerDelegate;

@interface BCWebViewController : NSViewController <WKNavigationDelegate>

@property (retain, nonatomic) BCInvalidCertificatView *invalidCertificatView;
@property (retain, nonatomic) BCProgressIndicatorView *progressIndicatorView;
@property (retain, nonatomic) BCServerErrorView *serverErrorView;
@property (retain, nonatomic) NSURL *originURL;
@property (nonatomic) BOOL wasCallbackCaptured;
@property (weak, nonatomic) id<BCWebViewControllerDelegate> delegate;
@property (retain, nonatomic) WKWebView *webkitView;
@property (retain, nonatomic) NSString *callbackURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)reload;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)setupObservers;
- (void)removeObservers;
- (void)setupConstraints;
- (void)loadURL:(id)a0;
- (void)setupSubviews;
- (id)initWithCallbackURI:(id)a0;
- (void)dismissErrorViews;
- (void)setupProgressIndicator;
- (BOOL)isCertificatRelatedError:(id)a0;
- (void)presentCertificatErrorForHost:(id)a0;
- (void)presentServerError;

@end
