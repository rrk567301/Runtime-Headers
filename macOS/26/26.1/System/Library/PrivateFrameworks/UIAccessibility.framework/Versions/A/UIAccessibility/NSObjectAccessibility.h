@interface NSObjectAccessibility : __NSObjectAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityValue:(id)a0;
- (id)accessibilityLocalizedStringKey;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedValue;
- (void)_accessibilitySetTextInsertionGlowModeEnabled:(BOOL)a0;

@end
