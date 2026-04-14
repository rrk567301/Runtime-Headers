@interface _TtC26GenerativePartnerServiceUIP33_523B638A891D014E0FE626E103F518F622ModalWebViewController : NSViewController <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ topPadding;
    void /* unknown type, empty encoding */ buttonTrayHeight;
    void /* unknown type, empty encoding */ buttonWidth;
    void /* unknown type, empty encoding */ loadingIndicator;
    void /* unknown type, empty encoding */ selectedProvider;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)viewDidLoad;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)dismissWebView;

@end
