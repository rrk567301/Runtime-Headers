@interface _NSBackingLayer : CALayer

- (void)didChangeValueForKey:(id)a0;
- (BOOL)NS_hasPartialPrefetchedContentsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)NS_hasPrefetchedContentsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })NS_renderedRectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)NS_setIsScrolling:(BOOL)a0;
- (void)NS_setPresentationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)NS_showPrefetchedContentsIfNecessaryInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)NS_wantsToPrefetchTiles;
- (void)display;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })NS_activeVisibleRect;
- (id)NS_makeContentsLayer;
- (BOOL)NS_prefetchContentsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)NS_setPreparedContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayIfNeeded;
- (void)setContents:(id)a0;
- (void)setContentsScale:(double)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
