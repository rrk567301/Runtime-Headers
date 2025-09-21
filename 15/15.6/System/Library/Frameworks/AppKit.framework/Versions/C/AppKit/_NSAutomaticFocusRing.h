@interface _NSAutomaticFocusRing : NSObject

+ (void)initialize;
+ (void)_clearOldFocusRing;
+ (void)_focusRingViewDidChangeGeometryInWindow:(id)a0;
+ (void)_invalidateAnimatedRingWithTimer:(id)a0;
+ (void)_setFocusRingView:(id)a0;
+ (id)_state;
+ (void)compositeIfShownInWindow:(id)a0;
+ (id)focusRingRegionForWindow:(id)a0;
+ (id)focusRingViewForViewRoot:(id)a0;
+ (void)hideForView:(id)a0;
+ (char)isHiddenForAccessibility;
+ (void)setActiveFirstResponderChanged;
+ (void)setHiddenForAccessibility:(char)a0;
+ (void)setNeedsUpdateForView:(id)a0;
+ (void)showForView:(id)a0;
+ (void)showForView:(id)a0 forceRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 isAccessibilityRequest:(char)a2;
+ (void)translateFocusRingRegionBy:(struct CGPoint { double x0; double x1; })a0 forWindow:(id)a1;
+ (void)updateIfNeeded;

@end
