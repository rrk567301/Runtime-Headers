@interface NSObjectAccessibility : __NSObjectAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)setAccessibilityLabel:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)setAccessibilityValue:(id)a0;
- (void)accessibilityDecrement;
- (id)accessibilityLocalizedStringKey;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedValue;
- (void)_accessibilitySetTextInsertionGlowModeEnabled:(BOOL)a0;

@end
