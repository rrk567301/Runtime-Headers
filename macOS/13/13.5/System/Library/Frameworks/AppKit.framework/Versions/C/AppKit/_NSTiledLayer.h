@class NSPointerArray, NSTileScrollingInfoLayer;

@interface _NSTiledLayer : CALayer {
    NSPointerArray *_observedObjects;
    NSTileScrollingInfoLayer *_tileScrollingInfoLayer;
    BOOL _isScrolling;
}

@property struct CGSize { double x0; double x1; } tileSize;
@property unsigned long long prefetchBorder;

+ (void)initialize;
+ (id)defaultValueForKey:(id)a0;
+ (BOOL)needsDisplayForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void)didChangeValueForKey:(id)a0;
- (BOOL)NS_hasPartialPrefetchedContentsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)NS_hasPrefetchedContentsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)NS_invalidatePreparedContentRect;
- (void)NS_prepareContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })NS_renderedRectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)NS_setIsScrolling:(BOOL)a0;
- (void)NS_setPresentationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)NS_showPrefetchedContentsIfNecessaryInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)NS_wantsToPrefetchTiles;
- (void)display;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })NS_activeVisibleRect;
- (BOOL)NS_isScrolling;
- (BOOL)NS_prefetchContentsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scrollVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)NS_setPreparedContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addAllTilesWithNonPurgedContents;
- (void)_purgeExcessTileContents;
- (void)_updateTileScrollingInfoLayerFrame;
- (void)addSublayer:(id)a0;
- (void)drawTile:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)renderInContext:(struct CGContext { } *)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContents:(id)a0;
- (void)setContentsScale:(double)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void)updateTileScrollingInfoLayer;
- (void)visibleRectDidChange;

@end
