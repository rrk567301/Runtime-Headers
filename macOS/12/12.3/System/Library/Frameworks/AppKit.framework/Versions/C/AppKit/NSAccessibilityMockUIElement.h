@class NSString;

@interface NSAccessibilityMockUIElement : NSAccessibilityElement {
    NSString *_role;
    NSString *_subrole;
    id _parent;
}

+ (id)elementWithRole:(id)a0 subrole:(id)a1 parent:(id)a2;
+ (id)elementWithRole:(id)a0 parent:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)initWithRole:(id)a0 subrole:(id)a1 parent:(id)a2;
- (id)initWithRole:(id)a0 parent:(id)a1;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilitySupportsOverriddenAttributes;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (id)accessibilitySubroleAttribute;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (id)accessibilityFocusedAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilityParentAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityPositionAttribute;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityHorizontalUnitDescriptionAttribute;
- (id)accessibilityVerticalUnitDescriptionAttribute;

@end
