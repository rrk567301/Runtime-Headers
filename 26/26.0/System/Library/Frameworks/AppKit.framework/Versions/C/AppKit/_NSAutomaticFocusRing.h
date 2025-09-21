@interface _NSAutomaticFocusRing : NSObject

+ (id)_state;
+ (void)initialize;
+ (void)updateIfNeeded;
+ (void)_clearOldFocusRing;
+ (void)_focusRingViewDidChangeGeometryInWindow:(id)a0;
+ (void)_invalidateAnimatedRingWithTimer:(id)a0;
+ (void)_setFocusRingView:(id)a0;
+ (void)compositeIfShownInWindow:(id)a0;
+ (id)focusRingRegionForWindow:(id)a0;
+ (id)focusRingViewForViewRoot:(id)a0;
+ (void)hideForView:(id)a0;
+ (BOOL)isHiddenForAccessibility;
+ (void)setActiveFirstResponderChanged;
+ (void)setHiddenForAccessibility:(BOOL)a0;
+ (void)setNeedsUpdateForView:(id)a0;
+ (void)showForView:(id)a0;
+ (void)showForView:(id)a0 forceRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 isAccessibilityRequest:(BOOL)a2;
+ (void)translateFocusRingRegionBy:(struct CGPoint { double x0; double x1; })a0 forWindow:(id)a1;

@end
