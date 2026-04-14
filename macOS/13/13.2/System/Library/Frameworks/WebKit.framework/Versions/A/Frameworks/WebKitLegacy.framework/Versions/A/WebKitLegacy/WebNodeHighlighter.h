@class WebView, WebNodeHighlight;

@interface WebNodeHighlighter : NSObject {
    WebView *_inspectedWebView;
    WebNodeHighlight *_currentHighlight;
}

- (void)dealloc;
- (void)hideHighlight;
- (id)initWithInspectedWebView:(id)a0;
- (void)didAttachWebNodeHighlight:(id)a0;
- (void)willDetachWebNodeHighlight:(id)a0;
- (void)highlight;

@end
