@class NSString;

@interface WKTextExtractionImageItem : WKTextExtractionItem {
    void /* function */ name;
    void /* function */ altText;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *altText;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 altText:(id)a1 rectInWebView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 children:(id)a3;

@end
