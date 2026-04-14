@interface NSAccessibilitySegment : NSAccessibilityIndexedMockUIElement

+ (id)segmentWithIndex:(long long)a0 parent:(id)a1;

- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (id)accessibilityFocusedAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityIdentifierAttribute;
- (void)_accessibilityPerformClickAction:(id)a0;
- (id)initWithIndex:(long long)a0 parent:(id)a1;
- (id)segmentedCell;

@end
