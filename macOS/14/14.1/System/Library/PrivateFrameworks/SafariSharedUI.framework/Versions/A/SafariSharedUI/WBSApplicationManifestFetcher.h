@class WKWebView, _WKApplicationManifest;

@interface WBSApplicationManifestFetcher : NSObject {
    id /* block */ _completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    long long _state;
}

+ (void)downloadImagesForManifest:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (long long)_preferredPurposeForIcons:(id)a0;
+ (long long)_primaryPurposeForPurposes:(id)a0;

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)getApplicationManifestWithCompletionHandler:(id /* block */)a0;

@end
