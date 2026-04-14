@interface NSTouchBarCustomizationPaletteAppearance : NSBuiltinAppearance

- (id)_bundleResourceName;
- (BOOL)_isFunctionRowAppearance;
- (BOOL)_optionsMustContainTintColor;
- (BOOL)_prefersMoreHorizontalContentIndicators;
- (BOOL)_prefersSliderAccessoryStepBehavior;
- (BOOL)_wantsSolarium;

@end
