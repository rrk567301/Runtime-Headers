@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> { struct TileController *__ptr_; } _tileController;
}

- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOpaque:(BOOL)a0;
- (void)setNeedsDisplay;
- (BOOL)isOpaque;
- (id)actionForKey:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (id)init;
- (void)setContentsFormat:(unsigned char)a0;
- (void)setBorderWidth:(double)a0;
- (id).cxx_construct;
- (void)setDrawsAsynchronously:(BOOL)a0;
- (unsigned char)contentsFormat;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsScale:(double)a0;
- (double)contentsScale;
- (BOOL)drawsAsynchronously;
- (void *)createTileController:(void *)a0;
- (void *)tiledBacking;

@end
