@interface NSAccessibilityProxy : NSObject

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFocusRingBoundsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeValue:(id)a0 forParameter:(id)a1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityFocusedAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityOverriddenAttributes;
- (id)realElement;
- (id)_proxyParentedChild:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)_proxyForUIElement:(id)a0;

@end
