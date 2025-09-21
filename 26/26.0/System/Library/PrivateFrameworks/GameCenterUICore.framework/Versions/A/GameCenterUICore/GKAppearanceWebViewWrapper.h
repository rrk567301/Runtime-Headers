@class WebView;

@interface GKAppearanceWebViewWrapper : NSView

@property (retain) WebView *webView;
@property BOOL htmlLoaded;

- (void)updateLayer;
- (void).cxx_destruct;

@end
