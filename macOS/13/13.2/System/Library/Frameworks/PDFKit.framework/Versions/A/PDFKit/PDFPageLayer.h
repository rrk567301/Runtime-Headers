@class NSString, PDFPageLayerPrivate;

@interface PDFPageLayer : CALayer <PDFPageLayerInterface> {
    PDFPageLayerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSublayers;
- (id)page;
- (BOOL)isGeometryFlipped;
- (void)clearTiles;
- (long long)displayBox;
- (void)willStartLiveResize;
- (void)_updateTiles;
- (id)renderingProperties;
- (void)_pageDidRotate:(id)a0;
- (void)_pageChangedPageRef:(id)a0;
- (id)initWithPage:(id)a0 geometryInterface:(id)a1 andRenderingProperties:(id)a2;
- (id)geometryInterface;
- (void)setNeedsTilesUpdate;
- (void)addPageLayerEffect:(id)a0;
- (void)removePageLayerEffectForID:(id)a0;
- (id)pageLayerEffectForID:(id)a0;
- (void)updatePageLayerEffectForID:(id)a0;
- (void)updatePageLayerEffects;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })layerEffectTransform;
- (void)scalePageLayerEffects:(double)a0;
- (void)setEnableTileUpdates:(BOOL)a0;
- (BOOL)enablesTileUpdates;
- (void)forceTileUpdate;
- (void)saveOriginalTileLayout;
- (void)restoreOriginalTileLayout;
- (void)applyTileLayoutScale:(double)a0;
- (void)willEndStartLiveResize;
- (void)setVisibilityDelegateIndex:(unsigned long long)a0;
- (unsigned long long)visibilityDelegateIndex;
- (id)_pageLayerEffects;
- (void)_updateLayerEffect:(id)a0 withPageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)_renderingPropertyUpdate:(id)a0;
- (void)_forceTileUpdate;
- (void)_tileUpdateComplete;
- (void)_releaseTiles;
- (void)_releasePageLayerEffects;
- (void)_hideTileLayer:(BOOL)a0;
- (void)_setEnablePageShadows:(BOOL)a0;
- (void)tileDrawingComplete:(id)a0;
- (BOOL)_isTile:(id)a0 occludedByTiles:(id)a1;
- (id)_subtractRectB:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRectA:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layerTileToRootViewBounds:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageLayerVisibleRect;
- (BOOL)_hasTileWithFrameInLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_printRectsArray:(id)a0;

@end
