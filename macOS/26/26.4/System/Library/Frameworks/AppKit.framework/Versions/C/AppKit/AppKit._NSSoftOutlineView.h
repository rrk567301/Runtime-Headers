@interface AppKit._NSSoftOutlineView : NSView {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ outlineLayer;
}

@property (nonatomic) BOOL clipsToBounds;

- (void)layout;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToWindow;
- (id)makeBackingLayer;

@end
