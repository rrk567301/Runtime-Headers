@interface _NSAccessibilityLabelViewLabel : NSAccessibilityIndexedMockUIElement

+ (id)labelWithIndex:(long long)a0 parent:(id)a1;

- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;

@end
