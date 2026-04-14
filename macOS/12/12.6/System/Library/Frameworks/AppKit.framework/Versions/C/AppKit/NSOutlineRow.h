@interface NSOutlineRow : NSTableRow

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySubroleAttribute;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)isAccessibilityAlternateUIVisible;
- (long long)_outlineTableColumnIndex;
- (BOOL)_accessibilityDisplaysDisclosureTriangleForRow:(long long)a0;
- (id)accessibilityDisclosingAttribute;
- (BOOL)accessibilityIsDisclosingAttributeSettable;
- (void)accessibilitySetDisclosingAttribute:(id)a0;
- (id)accessibilityDisclosedRowsAttribute;
- (BOOL)accessibilityIsDisclosedRowsAttributeSettable;
- (id)accessibilityDisclosedByRowAttribute;
- (BOOL)accessibilityIsDisclosedByRowAttributeSettable;
- (id)accessibilityDisclosureLevelAttribute;
- (BOOL)accessibilityIsDisclosureLevelAttributeSettable;
- (id)_accessibilityChildrenWithIndexes:(id)a0;
- (long long)_childrenCount;
- (BOOL)accessibilityHasOutlineColumnMockGroupForRow:(long long)a0 column:(long long)a1;

@end
