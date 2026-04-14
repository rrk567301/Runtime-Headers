@interface _NSAutomaticFocusRing : NSObject

+ (void)initialize;
+ (id)_state;
+ (void)_focusRingViewDidChangeGeometryInWindow:(id)a0;
+ (void)_invalidateAnimatedRingWithTimer:(id)a0;
+ (void)_setFocusRingView:(id)a0;
+ (void)_clearOldFocusRing;
+ (BOOL)isHiddenForAccessibility;
+ (void)setHiddenForAccessibility:(BOOL)a0;
+ (void)showForView:(id)a0;
+ (void)showForView:(id)a0 forceRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 isAccessibilityRequest:(BOOL)a2;
+ (void)updateIfNeeded;
+ (void)setNeedsUpdateForView:(id)a0;
+ (void)hideForView:(id)a0;
+ (id)focusRingViewForViewRoot:(id)a0;
+ (void)compositeIfShownInWindow:(id)a0;
+ (id)focusRingRegionForWindow:(id)a0;
+ (void)translateFocusRingRegionBy:(struct CGPoint { double x0; double x1; })a0 forWindow:(id)a1;
+ (void)setActiveFirstResponderChanged;

@end
