@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> { struct TileController *__ptr_; } _tileController;
}

- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)actionForKey:(id)a0;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (void)setNeedsDisplay;
- (void)setBorderWidth:(double)a0;
- (void)setDrawsAsynchronously:(BOOL)a0;
- (void)setOpaque:(BOOL)a0;
- (double)contentsScale;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsScale:(double)a0;
- (void)setContentsFormat:(unsigned char)a0;
- (void)invalidate;
- (id).cxx_construct;
- (BOOL)isOpaque;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned char)contentsFormat;
- (id)init;
- (BOOL)drawsAsynchronously;
- (void *)createTileController:(void *)a0;
- (void *)tiledBacking;

@end
