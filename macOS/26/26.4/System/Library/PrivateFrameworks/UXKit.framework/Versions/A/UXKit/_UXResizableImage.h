@class NSImage;

@interface _UXResizableImage : NSImage {
    NSImage *_topLeftCorner;
    NSImage *_topEdgeFill;
    NSImage *_topRightCorner;
    NSImage *_leftEdgeFill;
    NSImage *_centerFill;
    NSImage *_rightEdgeFill;
    NSImage *_bottomLeftCorner;
    NSImage *_bottomEdgeFill;
    NSImage *_bottomRightCorner;
    double _scale;
}

@property (nonatomic) BOOL alwaysStretches;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectInPixels;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentStretchInPixels;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImage:(id)a0 capInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 operation:(unsigned long long)a2 fraction:(double)a3 respectFlipped:(BOOL)a4 hints:(id)a5;
- (struct CGSize { double x0; double x1; })_sizeInPixels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentInsetsInPixels:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 emptySizeFallback:(id /* block */)a1;
- (void)_setupNinePartFromImage:(id)a0;

@end
