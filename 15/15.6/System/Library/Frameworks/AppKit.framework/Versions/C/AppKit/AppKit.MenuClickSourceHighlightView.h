@interface AppKit.MenuClickSourceHighlightView : NSView {
    void /* unknown type, empty encoding */ frames;
    void /* unknown type, empty encoding */ highlightCornerRadius;
    void /* unknown type, empty encoding */ edgeInsets;
    void /* unknown type, empty encoding */ _colors;
}

@property (nonatomic, readonly) char flipped;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;

@end
