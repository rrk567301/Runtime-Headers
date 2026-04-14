@class NSString;

@interface WKTextExtractionIFrameItem : WKTextExtractionItem {
    void /* function */ origin;
}

@property (nonatomic, readonly) NSString *origin;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOrigin:(id)a0 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 children:(id)a2 eventListeners:(unsigned long long)a3 ariaAttributes:(id)a4 accessibilityRole:(id)a5 nodeIdentifier:(id)a6;

@end
