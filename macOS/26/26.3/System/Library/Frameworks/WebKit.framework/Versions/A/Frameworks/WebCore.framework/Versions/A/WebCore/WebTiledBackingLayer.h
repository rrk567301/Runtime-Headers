@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> { struct { struct TileController *__ptr_; } ; } _tileController;
}

- (void)invalidate;
- (void)setNeedsDisplay;
- (id)actionForKey:(id)a0;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (BOOL)isOpaque;
- (unsigned char)contentsFormat;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setDrawsAsynchronously:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setBorderWidth:(double)a0;
- (void)setContentsScale:(double)a0;
- (void)setContentsFormat:(unsigned char)a0;
- (void)setOpaque:(BOOL)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (double)contentsScale;
- (BOOL)drawsAsynchronously;
- (void *)createTileController:(void *)a0;
- (void *)tiledBacking;

@end
