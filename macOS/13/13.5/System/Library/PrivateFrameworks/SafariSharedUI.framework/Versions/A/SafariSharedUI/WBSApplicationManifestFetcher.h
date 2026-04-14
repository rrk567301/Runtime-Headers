@class WKWebView, _WKApplicationManifest;

@interface WBSApplicationManifestFetcher : NSObject {
    id /* block */ _completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    long long _state;
}

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)getApplicationManifestWithCompletionHandler:(id /* block */)a0;

@end
