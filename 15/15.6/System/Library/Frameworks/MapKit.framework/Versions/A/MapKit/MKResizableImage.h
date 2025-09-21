@class NSImage;

@interface MKResizableImage : NSImage {
    char _alwaysStretches;
    char _needsInsetUpdate;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _capInsets;
}

@property (retain, nonatomic) NSImage *topLeftCorner;
@property (retain, nonatomic) NSImage *topEdgeFill;
@property (retain, nonatomic) NSImage *topRightCorner;
@property (retain, nonatomic) NSImage *leftEdgeFill;
@property (retain, nonatomic) NSImage *centerFill;
@property (retain, nonatomic) NSImage *rightEdgeFill;
@property (retain, nonatomic) NSImage *bottomLeftCorner;
@property (retain, nonatomic) NSImage *bottomEdgeFill;
@property (retain, nonatomic) NSImage *bottomRightCorner;

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 respectFlipped:(char)a4 hints:(id)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentStretchInPixels;
- (id)imageWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0 capInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)updateNinePart;

@end
