@class WebView;

@interface WebTextListTouchBarViewController : NSViewController {
    WebView *_webView;
}

@property (nonatomic) int currentListType;

- (id)initWithWebView:(id)a0;
- (void)_selectList:(id)a0;

@end
