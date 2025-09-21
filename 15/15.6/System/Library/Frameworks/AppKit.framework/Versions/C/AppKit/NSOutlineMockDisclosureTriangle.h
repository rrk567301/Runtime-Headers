@class NSOutlineView, NSTableColumn;

@interface NSOutlineMockDisclosureTriangle : NSObject {
    long long _row;
    NSOutlineView *_outlineView;
    NSTableColumn *_column;
}

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (long long)row;
- (long long)column;
- (id)accessibilityActionDescription:(id)a0;
- (id)initWithRow:(long long)a0 column:(long long)a1 outlineView:(id)a2;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsEnabledAttributeSettable;
- (char)accessibilityIsIgnored;
- (char)accessibilityIsParentAttributeSettable;
- (char)accessibilityIsPositionAttributeSettable;
- (char)accessibilityIsRoleAttributeSettable;
- (char)accessibilityIsRoleDescriptionAttributeSettable;
- (char)accessibilityIsSizeAttributeSettable;
- (char)accessibilityIsTopLevelUIElementAttributeSettable;
- (char)accessibilityIsValueAttributeSettable;
- (char)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilitySizeAttribute;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityValueAttribute;
- (id)accessibilityWindowAttribute;

@end
