@class NSArray, NSString, NSAppearance;

@interface NSCompositeAppearance : NSAppearance {
    NSArray *_appearances;
    NSString *_compositeName;
    NSAppearance *_pushButtonAppearance;
}

@property (copy) NSArray *appearances;
@property (copy) NSString *name;

+ (id)compositeAppearanceForView:(id)a0;

- (void)dealloc;
- (id)debugDescription;
- (char)isEqual:(id)a0;
- (id)uniqueIdentifier;
- (id)bestMatchFromAppearancesWithNames:(id)a0;
- (id)_appearanceForNonVibrantContent;
- (double)_maxScaleFactor;
- (char)_allowsSystemControlTintColors;
- (char)_allowsVibrancyForColor:(id)a0;
- (id)_appearanceByMapping:(id /* block */)a0;
- (id)_appearanceForVibrantContent;
- (char)_backstoppedByFullAppearance;
- (int)_callCoreUIWithBlock:(id /* block */)a0 options:(id)a1 requireBezelTintColor:(char)a2;
- (id)_coreUICatalog;
- (int)_defaultBlendMode;
- (id)_flattenedAppearanceNamesList;
- (char)_isBuiltinAppearance;
- (char)_isFunctionRowAppearance;
- (char)_isTintedWithLightColor;
- (struct CGSize { double x0; double x1; })_minimumSizeForStandardButton;
- (char)_prefersMoreHorizontalContentIndicators;
- (char)_prefersSliderAccessoryStepBehavior;
- (double)_textGlyphBrightnessMultiplier;
- (unsigned long long)_textGlyphColorTemperature;
- (void)_updateSystemTintColor;
- (char)_usesMetricsAppearance;
- (char)allowsVibrancy;
- (id)appearanceByApplyingTintColor:(id)a0;
- (id)compositeName;
- (id)initWithAppearances:(id)a0;
- (id)resolvedAppearanceForColor:(id)a0;
- (id)resolvedAppearanceForCustomTintedWidget:(id)a0;
- (id)resolvedAppearanceForStyleName:(id)a0 styleConfiguration:(id)a1;
- (id)resolvedAppearanceForWidget:(id)a0 styleConfiguration:(id)a1;
- (id)resolvedAppearanceForWidget:(id)a0 variant:(id)a1;
- (id)systemFontForControlSize:(unsigned long long)a0 weight:(double)a1;
- (double)systemFontSizeForControlSize:(unsigned long long)a0;
- (id)tintColor;

@end
