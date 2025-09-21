@interface AppKit.ShadowEdgeMask : NSView {
    void /* unknown type, empty encoding */ region;
    void /* unknown type, empty encoding */ radius;
    void /* unknown type, empty encoding */ inset;
    void /* unknown type, empty encoding */ shadowLayer1;
}

@property (nonatomic) BOOL clipsToBounds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void).cxx_destruct;

@end
