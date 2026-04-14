@interface WKTextExtractionContentEditableItem : WKTextExtractionItem {
    void /* unknown type, empty encoding */ contentEditableType;
    void /* unknown type, empty encoding */ backingIsFocused;
}

@property (nonatomic, readonly) BOOL focused;

- (BOOL)isFocused;
- (id)init;
- (id)initWithContentEditableType:(long long)a0 isFocused:(BOOL)a1 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 children:(id)a3 eventListeners:(unsigned long long)a4 ariaAttributes:(id)a5 accessibilityRole:(id)a6 nodeIdentifier:(id)a7;

@end
