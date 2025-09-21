@class TSCH3DScene, TSCH3DChartResizerHelper, TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {
    TSCH3DChartResizerHelper *_resizerHelper;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _chartBodyLayoutOffsetInChartAreaLayoutSpace;
    char _isInvalidated;
    struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } _initialInfoChartScale;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } chartBodyLayoutRect;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } containingViewport;
@property (readonly, nonatomic) TSCH3DVector *containingViewportVector;
@property (readonly, nonatomic) const void *projectedBounds;
@property (readonly, nonatomic) TSCH3DScene *scene;
@property (nonatomic) char isInvariant;

+ (id)debug_worldBoundsDescriptionForScene:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithParent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void)clearAll;
- (void)clearScene;
- (void)invalidateBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (char)p_outwardLayoutCanUseCacheItem:(id)a0;
- (void)p_updateLayoutSize:(struct CGSize { double x0; double x1; })a0 chartBodyLayoutOffsetInChartAreaLayoutSpace:(void *)a1;
- (id)p_cache;
- (id)boundsLayout;
- (id)boundsLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scene:(id)a1 forcesAccurateBounds:(char)a2 allowsEmptyBodyLayoutBounds:(char)a3;
- (id)debug_rotationBounds;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)a0 boundsIndex:(long long)a1;
- (void)layoutInward;
- (void)layoutOutward;
- (id)p_cacheInwardLayout;
- (id)p_cacheOutwardLayout;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })p_currentModelSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_frameForSelectionPath:(id)a0 sceneObjectClass:(Class)a1;
- (char)p_inwardLayoutCanUseCacheItem:(id)a0;
- (char)p_needsRefinementForInwardLayout;
- (void)p_updateBodyLayoutRect;
- (void)p_updateFromCacheItem:(id)a0;
- (id)p_updatedResizerHelper;
- (id)p_updatedResizerHelperForcingAccurateBounds:(char)a0;
- (char)p_validCacheItem:(id)a0 inward:(char)a1;
- (void)p_validate;
- (const void *)projectedBoundsWithScene:(id)a0 forcesAccurateBounds:(char)a1 allowsEmptyBodyLayoutBounds:(char)a2;
- (void)setChartBodyLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)setLayoutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setStabilizedChartBodyLayoutRectUsingConverter:(const void *)a0;

@end
