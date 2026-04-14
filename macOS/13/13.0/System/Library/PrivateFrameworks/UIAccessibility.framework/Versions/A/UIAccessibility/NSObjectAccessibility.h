@interface NSObjectAccessibility : __NSObjectAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityRespondsToUserInteraction;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedValue;

@end
