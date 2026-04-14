@class NSString, NSArray, WKTextExtractionEditable;

@interface WKTextExtractionTextItem : WKTextExtractionItem {
    void /* function */ content;
    void /* function */ links;
}

@property (nonatomic, copy) NSString *content;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) WKTextExtractionEditable *editable;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContent:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 links:(id)a2 editable:(id)a3 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 children:(id)a5 eventListeners:(unsigned long long)a6 ariaAttributes:(id)a7 accessibilityRole:(id)a8 nodeIdentifier:(id)a9;

@end
