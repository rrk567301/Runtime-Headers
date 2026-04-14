@class NSArray;

@interface WKTextExtractionSelectItem : WKTextExtractionItem {
    void /* function */ selectedValues;
}

@property (nonatomic, readonly) NSArray *selectedValues;
@property (nonatomic, readonly) BOOL supportsMultiple;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSelectedValues:(id)a0 supportsMultiple:(BOOL)a1 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 children:(id)a3 eventListeners:(unsigned long long)a4 ariaAttributes:(id)a5 accessibilityRole:(id)a6 nodeIdentifier:(id)a7;

@end
