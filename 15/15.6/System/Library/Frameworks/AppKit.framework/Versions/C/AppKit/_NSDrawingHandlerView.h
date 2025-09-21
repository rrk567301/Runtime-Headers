@interface _NSDrawingHandlerView : NSView {
    id /* block */ _drawingHandler;
    char _flipped;
    char _opaque;
}

@property (copy, nonatomic) id /* block */ drawingHandler;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_drawsNothing;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(char)a1 opaque:(char)a2;
- (char)isFlipped;
- (char)isOpaque;

@end
