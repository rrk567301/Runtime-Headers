@interface NSOutlineRow : NSTableRow

- (id)_accessibilityChildrenWithIndexes:(id)a0;
- (char)_accessibilityDisplaysDisclosureTriangleForRow:(long long)a0;
- (long long)_childrenCount;
- (long long)_outlineTableColumnIndex;
- (id)accessibilityAttributeNames;
- (id)accessibilityDisclosedByRowAttribute;
- (id)accessibilityDisclosedRowsAttribute;
- (id)accessibilityDisclosingAttribute;
- (id)accessibilityDisclosureLevelAttribute;
- (char)accessibilityHasOutlineColumnMockGroupForRow:(long long)a0 column:(long long)a1;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (char)accessibilityIsDisclosedByRowAttributeSettable;
- (char)accessibilityIsDisclosedRowsAttributeSettable;
- (char)accessibilityIsDisclosingAttributeSettable;
- (char)accessibilityIsDisclosureLevelAttributeSettable;
- (char)accessibilityPerformShowAlternateUI;
- (char)accessibilityPerformShowDefaultUI;
- (id)accessibilityRoleAttribute;
- (void)accessibilitySetDisclosingAttribute:(id)a0;
- (id)accessibilitySubroleAttribute;
- (char)isAccessibilityAlternateUIVisible;

@end
