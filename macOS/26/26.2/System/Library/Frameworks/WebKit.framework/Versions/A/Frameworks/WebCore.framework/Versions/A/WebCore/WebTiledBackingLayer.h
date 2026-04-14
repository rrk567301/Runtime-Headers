@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> { struct { struct TileController *__ptr_; } ; } _tileController;
}

- (double)contentsScale;
- (void)setOpaque:(BOOL)a0;
- (void)invalidate;
- (void)setNeedsDisplay;
- (void)setContentsScale:(double)a0;
- (id)actionForKey:(id)a0;
- (void)setDrawsAsynchronously:(BOOL)a0;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (BOOL)isOpaque;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setContentsFormat:(unsigned char)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned char)contentsFormat;
- (void)setBorderWidth:(double)a0;
- (id)init;
- (void)dealloc;
- (BOOL)drawsAsynchronously;
- (void *)createTileController:(void *)a0;
- (void *)tiledBacking;

@end
