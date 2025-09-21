@interface NSMenuWindowManagerDrawingHandlerView : NSView {
    id /* block */ _drawingHandler;
    char _allowsVibrancy;
    struct CGSRegionObject { } *_invalidRegion;
}

@property struct CGSRegionObject { } *invalidRegion;

- (void)dealloc;
- (char)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 allowsVibrancy:(char)a1 drawingHandler:(id /* block */)a2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
