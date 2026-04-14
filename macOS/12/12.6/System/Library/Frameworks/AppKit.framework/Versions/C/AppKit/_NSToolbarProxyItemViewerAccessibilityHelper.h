@interface _NSToolbarProxyItemViewerAccessibilityHelper : _NSToolbarItemViewerAccessibilityHelper {
    id _realElement;
}

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityEnabledAttribute;
- (id)realElement;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityTitleAttribute;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (BOOL)showsAccessibilityDescriptionInIconOnlyMode;

@end
