@interface WKTextExtractionContainerItem : WKTextExtractionItem

@property (nonatomic, readonly) long long container;

- (id)init;
- (id)initWithContainer:(long long)a0 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 children:(id)a2;

@end
