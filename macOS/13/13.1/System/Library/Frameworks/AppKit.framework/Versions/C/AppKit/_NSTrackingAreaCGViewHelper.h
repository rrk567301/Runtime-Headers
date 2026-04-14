@class NSView, NSMutableSet;

@interface _NSTrackingAreaCGViewHelper : _NSTrackingAreaViewHelper {
    NSView *_view;
    struct _NSViewTrackingRect { long long x0; struct _NSViewTrackingRect *x1; } *_trackingRects;
    NSMutableSet *_trackingAreas;
    long long _trackingAreasDirty;
    unsigned char _invalidCursorRects : 1;
    unsigned char _cachedShouldUseTrackingAreasForToolTips : 1;
    unsigned char _shouldUseTrackingAreasForToolTips : 1;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)enableTrackingArea:(id)a0;
- (void)disableTrackingArea:(id)a0;
- (void)discardCursorRects;
- (id)initWithView:(id)a0;
- (long long)addTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 owner:(id)a1 userData:(void *)a2 assumeInside:(BOOL)a3;
- (void)removeTrackingRect:(long long)a0;
- (BOOL)areCursorRectsValid;
- (id)_resetCursorRects;
- (long long)addTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 owner:(id)a1 userData:(void *)a2 assumeInside:(BOOL)a3 useTrackingNum:(long long)a4;
- (void)removeTrackingRects:(long long *)a0 count:(long long)a1;
- (void)addTrackingRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 owner:(id)a1 userDataList:(void **)a2 assumeInsideList:(BOOL *)a3 trackingNums:(long long *)a4 count:(long long)a5;
- (long long)trackingAreasDirty;
- (void)setTrackingAreasDirty:(long long)a0;
- (void)_uninstallTrackingArea:(id)a0;
- (void)_installTrackingArea:(id)a0;
- (void)updateTrackingAreasWithInvalidCursorRects:(BOOL)a0;
- (void)_installTrackingAreas:(id)a0;
- (void)_uninstallTrackingAreas;
- (void)_uninstallRemovedTrackingAreas;
- (void)invalidateCursorRects;
- (BOOL)shouldUseTrackingAreasForToolTips;
- (void)enableOrDisableTrackingAreas;
- (void)disableTrackingRectsIfHidden;
- (void)enableTrackingRectsIfNotHidden;
- (id)pressureConfigurationTrackingAreaCreateIfNeeded:(BOOL)a0;
- (void)synchronizeEffectivePressureConfiguration;
- (id)revertGestureRecognizerPressureConfigurationForEvent:(id)a0;
- (void)_addTrackingTag:(long long)a0;
- (BOOL)_uncachedShouldUseTrackingAreasForToolTips;
- (void)_enableOrDisableTrackingArea:(id)a0;
- (void)_recursiveSetTrackingAreasDirty:(unsigned long long)a0;
- (void)_updateTrackingLocation:(id)a0;
- (void)addCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cursor:(id)a1;
- (void)removeCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cursor:(id)a1;
- (void)cursorUpdate:(id)a0 forwardingBlock:(id /* block */)a1;
- (void)_removeTrackingRectTag:(long long)a0;
- (void)addTrackingArea:(id)a0;
- (void)removeTrackingArea:(id)a0;
- (id)trackingAreas;
- (void)trackingAreaRootWillChange;
- (void)trackingAreaRootDidChange;

@end
