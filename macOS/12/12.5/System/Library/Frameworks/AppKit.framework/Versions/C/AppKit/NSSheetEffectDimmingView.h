@class NSPointerArray, NSMapTable, NSVisualEffectView;

@interface NSSheetEffectDimmingView : NSView {
    NSMapTable *_percentShownMapping;
    NSPointerArray *_observedViews;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _reservedRect;
    double _maskBackingScaleFactor;
    NSVisualEffectView *_topView;
    NSVisualEffectView *_mlView;
    NSVisualEffectView *_mcView;
    NSVisualEffectView *_mrView;
    NSVisualEffectView *_bottomView;
}

- (void)dealloc;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateMask;
- (void)_rebuildMask;
- (double)_effectivePercentShown;
- (id)_viewsToPunchOutForWindow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_observedViewsReservedRect;
- (void)_adjustMaterialFrames;
- (BOOL)updatePercentShown:(double)a0 forMoveHelper:(id)a1;
- (BOOL)isShown;
- (id)contributingMoveHelpers;

@end
