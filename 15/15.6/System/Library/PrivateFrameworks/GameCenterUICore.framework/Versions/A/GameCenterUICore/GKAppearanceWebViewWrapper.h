@class WebView;

@interface GKAppearanceWebViewWrapper : NSView

@property (retain) WebView *webView;
@property char htmlLoaded;

- (void).cxx_destruct;
- (void)updateLayer;

@end
