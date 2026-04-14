@interface NSObjectAccessibility : __NSObjectAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)a0;
- (id)accessibilityLabel;
- (void)accessibilityDecrement;
- (void)setAccessibilityLabel:(id)a0;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLocalizedStringKey;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedValue;
- (void)_accessibilitySetTextInsertionGlowModeEnabled:(BOOL)a0;

@end
