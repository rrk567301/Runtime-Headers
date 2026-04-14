@interface _NSToolbarSeparator : NSView {
    BOOL _inPalette;
}

- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setInPalette:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })rasterize:(struct CGPoint { double x0; double x1; })a0;

@end
