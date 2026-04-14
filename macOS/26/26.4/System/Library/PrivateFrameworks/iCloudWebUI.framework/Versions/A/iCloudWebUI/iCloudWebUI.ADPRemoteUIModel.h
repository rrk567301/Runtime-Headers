@interface iCloudWebUI.ADPRemoteUIModel : NSObject <iCloudWebViewDelegate> {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ remoteUIComplete;
}

- (void).cxx_destruct;
- (id)init;
- (void)endWebView:(id)a0;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)loadFailed:(id)a0;

@end
