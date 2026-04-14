@interface _TtCV11ShazamKitUI13ShazamWebView11Coordinator : NSObject <WKUIDelegate, WKNavigationDelegate> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ webView;
}

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;

@end
