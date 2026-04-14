@class NSString;

@interface WKTextExtractionFormItem : WKTextExtractionItem {
    void /* function */ autocomplete;
    void /* function */ name;
}

@property (nonatomic, readonly) NSString *autocomplete;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAutocomplete:(id)a0 name:(id)a1 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 children:(id)a3 eventListeners:(unsigned long long)a4 ariaAttributes:(id)a5 accessibilityRole:(id)a6 nodeIdentifier:(id)a7;

@end
