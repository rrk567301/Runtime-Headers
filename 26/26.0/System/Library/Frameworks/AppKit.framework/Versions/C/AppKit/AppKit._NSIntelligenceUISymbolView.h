@interface AppKit._NSIntelligenceUISymbolView : NSView {
    void /* unknown type, empty encoding */ symbolConfiguration;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ livingColorView;
    void /* unknown type, empty encoding */ staticColorView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;

@end
