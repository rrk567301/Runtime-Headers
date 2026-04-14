@class NSURLAuthenticationChallenge, WKNavigationAction, WKNavigationResponse, WKWebView, NSURLCredential, WKWebpagePreferences;

@interface WebKit.WKNavigationDelegateAdapter : NSObject <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ owner;
    void /* unknown type, empty encoding */ navigationDecider;
}

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)init;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(WKWebView *)a0 decidePolicyForNavigationAction:(WKNavigationAction *)a1 preferences:(WKWebpagePreferences *)a2 decisionHandler:(void (^)(long long, WKWebpagePreferences *))a3;
- (void)webView:(WKWebView *)a0 decidePolicyForNavigationResponse:(WKNavigationResponse *)a1 decisionHandler:(void (^)(long long))a2;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(WKWebView *)a0 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)a1 completionHandler:(void (^)(long long, NSURLCredential *))a2;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (void)_webView:(id)a0 backForwardListItemAdded:(id)a1 removed:(id)a2;

@end
