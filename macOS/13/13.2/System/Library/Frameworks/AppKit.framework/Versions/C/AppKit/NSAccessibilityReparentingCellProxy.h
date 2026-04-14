@interface NSAccessibilityReparentingCellProxy : NSAccessibilityReparentingProxy

- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilityWindowAttribute;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySizeAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityVisibleCharacterRangeAttribute;
- (id)accessibilityLineForIndexAttributeForParameter:(id)a0;
- (id)accessibilityRangeForLineAttributeForParameter:(id)a0;
- (id)accessibilityRangeForPositionAttributeForParameter:(id)a0;
- (id)accessibilityBoundsForRangeAttributeForParameter:(id)a0;
- (BOOL)hasEditor;

@end
