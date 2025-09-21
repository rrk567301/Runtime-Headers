@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> { struct __compressed_pair<WebCore::TileController *, std::default_delete<WebCore::TileController>> { struct TileController *__value_; } __ptr_; } _tileController;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)setBorderWidth:(double)a0;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (void)setNeedsDisplay;
- (id)actionForKey:(id)a0;
- (double)contentsScale;
- (char)drawsAsynchronously;
- (char)isOpaque;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsFormat:(unsigned char)a0;
- (void)setContentsScale:(double)a0;
- (void)setDrawsAsynchronously:(char)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOpaque:(char)a0;
- (unsigned char)contentsFormat;
- (void *)createTileController:(void *)a0;
- (void *)tiledBacking;

@end
