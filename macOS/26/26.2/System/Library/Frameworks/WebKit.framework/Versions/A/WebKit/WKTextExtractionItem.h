@class NSArray, NSDictionary, NSString;

@interface WKTextExtractionItem : NSObject {
    void /* function */ children;
    void /* function */ ariaAttributes;
    void /* function */ accessibilityRole;
    void /* function */ nodeIdentifier;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectInWebView;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) unsigned long long eventListeners;
@property (nonatomic, readonly) NSDictionary *ariaAttributes;
@property (nonatomic, readonly) NSString *accessibilityRole;
@property (nonatomic, readonly) NSString *nodeIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 children:(id)a1 eventListeners:(unsigned long long)a2 ariaAttributes:(id)a3 accessibilityRole:(id)a4 nodeIdentifier:(id)a5;

@end
