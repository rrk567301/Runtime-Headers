@class NSString, NSURL;

@interface WKTextExtractionLinkItem : WKTextExtractionItem {
    void /* function */ target;
    void /* unknown type, empty encoding */ backingURL;
}

@property (nonatomic, readonly) NSString *target;
@property (nonatomic, readonly) NSURL *url;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 url:(id)a1 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 children:(id)a3 eventListeners:(unsigned long long)a4 ariaAttributes:(id)a5 accessibilityRole:(id)a6 nodeIdentifier:(id)a7;

@end
