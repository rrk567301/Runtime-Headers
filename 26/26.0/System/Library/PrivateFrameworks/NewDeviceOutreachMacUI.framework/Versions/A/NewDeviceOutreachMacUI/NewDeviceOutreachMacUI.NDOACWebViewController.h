@interface NewDeviceOutreachMacUI.NDOACWebViewController : NSViewController <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ warranty;
    void /* unknown type, empty encoding */ serialNumber;
    void /* unknown type, empty encoding */ params;
    void /* unknown type, empty encoding */ initialLoadCompleted;
    void /* unknown type, empty encoding */ retriesRemaining;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ kWebViewLoadMaxRetries;
    void /* unknown type, empty encoding */ kWebViewLoadRetryStatus;
    void /* unknown type, empty encoding */ kWebViewLoadSuccessStatus;
    void /* unknown type, empty encoding */ kWebViewLoadCloseScheme;
    void /* unknown type, empty encoding */ kWebViewLoadReadyScheme;
    void /* unknown type, empty encoding */ kWebViewLoadCompleteScheme;
}

@property (nonatomic, weak) void /* function */ webview;
@property (nonatomic, weak) void /* function */ spinner;
@property (nonatomic, weak) void /* function */ headerView;
@property (nonatomic, weak) void /* function */ cancelButton;
@property (nonatomic, weak) void /* function */ backButton;

- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)viewWillAppear;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;

@end
