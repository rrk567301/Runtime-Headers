@interface NSControlStripCustomizationPaletteAppearance : NSBuiltinAppearance

- (BOOL)_isFunctionRowAppearance;
- (BOOL)_prefersSliderAccessoryStepBehavior;
- (BOOL)_prefersMoreHorizontalContentIndicators;
- (BOOL)_optionsMustContainTintColor;
- (id)_bundleResourceName;

@end
