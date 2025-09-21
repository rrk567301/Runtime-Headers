@interface AppKit._NSSoftOutlineView : NSView {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ outlineLayer;
}

@property (nonatomic) BOOL clipsToBounds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (id)makeBackingLayer;

@end
