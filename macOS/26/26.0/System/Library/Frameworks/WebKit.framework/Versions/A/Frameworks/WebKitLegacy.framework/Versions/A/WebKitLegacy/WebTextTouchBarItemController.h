@class NSColor, WebView, WebTextListTouchBarViewController;

@interface WebTextTouchBarItemController : NSTextTouchBarItemController {
    struct RetainPtr<NSColor> { NSColor *m_ptr; } _textColor;
    struct RetainPtr<WebTextListTouchBarViewController> { WebTextListTouchBarViewController *m_ptr; } _textListTouchBarViewController;
    WebView *_webView;
}

@property (nonatomic) BOOL textIsBold;
@property (nonatomic) BOOL textIsItalic;
@property (nonatomic) BOOL textIsUnderlined;
@property (nonatomic) long long currentTextAlignment;
@property (retain, nonatomic) NSColor *textColor;

- (id)itemForIdentifier:(id)a0;
- (id).cxx_construct;
- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (id)textListViewController;
- (void)_webChangeColor:(id)a0;
- (void)_webChangeTextAlignment:(id)a0;
- (void)_webChangeTextStyle:(id)a0;
- (id)webTextListTouchBarViewController;

@end
