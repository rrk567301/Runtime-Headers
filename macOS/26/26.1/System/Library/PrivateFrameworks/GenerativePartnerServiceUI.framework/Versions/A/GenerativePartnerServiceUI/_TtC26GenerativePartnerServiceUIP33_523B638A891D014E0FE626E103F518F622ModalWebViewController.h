@interface _TtC26GenerativePartnerServiceUIP33_523B638A891D014E0FE626E103F518F622ModalWebViewController : NSViewController <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ topPadding;
    void /* unknown type, empty encoding */ buttonTrayHeight;
    void /* unknown type, empty encoding */ buttonWidth;
    void /* unknown type, empty encoding */ loadingIndicator;
    void /* unknown type, empty encoding */ selectedProvider;
}

- (void)viewDidLoad;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)dismissWebView;

@end
