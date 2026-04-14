@interface NSTouchBarCustomizationPaletteAppearance : NSBuiltinAppearance

- (BOOL)_isFunctionRowAppearance;
- (BOOL)_optionsMustContainTintColor;
- (id)_bundleResourceName;
- (BOOL)_prefersMoreHorizontalContentIndicators;
- (BOOL)_prefersSliderAccessoryStepBehavior;

@end
