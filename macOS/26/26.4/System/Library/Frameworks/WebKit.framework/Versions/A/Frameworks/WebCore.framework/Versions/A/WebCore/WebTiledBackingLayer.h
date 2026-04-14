@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> { struct { struct TileController *__ptr_; } ; } _tileController;
}

- (void)setContentsFormat:(unsigned char)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)setNeedsDisplay;
- (id)actionForKey:(id)a0;
- (BOOL)isOpaque;
- (void)setOpaque:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)contentsScale;
- (void)setDrawsAsynchronously:(BOOL)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setBorderWidth:(double)a0;
- (id)init;
- (id).cxx_construct;
- (unsigned char)contentsFormat;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (void)dealloc;
- (BOOL)drawsAsynchronously;
- (void *)createTileController:(void *)a0;
- (void *)tiledBacking;

@end
