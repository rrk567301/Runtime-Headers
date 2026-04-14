@class PXGLayout, NSArray;

@interface PXGZoomLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
}

@property (readonly, nonatomic) PXGLayout *primaryLayer;
@property (readonly, nonatomic) NSArray *layers;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x; double y; } anchorViewportCenter;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)visibleRectDidChange;
- (void)safeAreaInsetsDidChange;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)referenceDepthDidChange;
- (id)axSpriteIndexes;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)viewEnvironmentDidChange;
- (void)scrollSpeedRegimeDidChange;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (void)didChangeSublayoutOrigins;
- (long long)scrollableAxis;
- (void)_updateSublayoutGeometries;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sublayout:(id)a0 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (long long)itemForSpriteIndex:(unsigned int)a0;
- (void)setLayers:(id)a0 primaryLayer:(id)a1;
- (void)_configureSublayouts;

@end
