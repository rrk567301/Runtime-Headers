@class NSArray;

@interface WKTextExtractionItem : NSObject {
    void /* function */ children;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectInWebView;
@property (nonatomic, readonly) NSArray *children;

- (id)init;
- (void).cxx_destruct;
- (id)initWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 children:(id)a1;

@end
