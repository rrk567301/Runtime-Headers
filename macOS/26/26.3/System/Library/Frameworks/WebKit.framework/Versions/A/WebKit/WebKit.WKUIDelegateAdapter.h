@class NSMenu, NSString, NSArray, WKOpenPanelParameters, _WKContextMenuElementInfo, WKSecurityOrigin, WKFrameInfo, WKWebView;
@protocol NSSecureCoding;

@interface WebKit.WKUIDelegateAdapter : NSObject <WKUIDelegatePrivate> {
    void /* unknown type, empty encoding */ owner;
    void /* unknown type, empty encoding */ menuBuilder;
    void /* unknown type, empty encoding */ dialogPresenter;
}

- (id)init;
- (void).cxx_destruct;
- (void)webView:(WKWebView *)a0 requestMediaCapturePermissionForOrigin:(WKSecurityOrigin *)a1 initiatedByFrame:(WKFrameInfo *)a2 type:(long long)a3 decisionHandler:(void (^)(long long))a4;
- (void)webView:(WKWebView *)a0 runJavaScriptAlertPanelWithMessage:(NSString *)a1 initiatedByFrame:(WKFrameInfo *)a2 completionHandler:(void (^)(void))a3;
- (void)webView:(WKWebView *)a0 runJavaScriptConfirmPanelWithMessage:(NSString *)a1 initiatedByFrame:(WKFrameInfo *)a2 completionHandler:(void (^)(BOOL))a3;
- (void)webView:(WKWebView *)a0 runJavaScriptTextInputPanelWithPrompt:(NSString *)a1 defaultText:(NSString *)a2 initiatedByFrame:(WKFrameInfo *)a3 completionHandler:(void (^)(NSString *))a4;
- (void)webView:(WKWebView *)a0 runOpenPanelWithParameters:(WKOpenPanelParameters *)a1 initiatedByFrame:(WKFrameInfo *)a2 completionHandler:(void (^)(NSArray *))a3;
- (void)_webView:(id)a0 geometryDidChange:(id)a1;
- (void)_webView:(WKWebView *)a0 getContextMenuFromProposedMenu:(NSMenu *)a1 forElement:(_WKContextMenuElementInfo *)a2 userInfo:(id<NSSecureCoding>)a3 completionHandler:(void (^)(NSMenu *))a4;

@end
