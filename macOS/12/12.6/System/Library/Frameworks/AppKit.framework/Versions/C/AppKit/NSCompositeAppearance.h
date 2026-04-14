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
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)uniqueIdentifier;
- (id)bestMatchFromAppearancesWithNames:(id)a0;
- (BOOL)_allowsVibrancyForColor:(id)a0;
- (BOOL)allowsVibrancy;
- (double)systemFontSizeForControlSize:(unsigned long long)a0;
- (BOOL)_usesMetricsAppearance;
- (int)_defaultBlendMode;
- (id)_appearanceForVibrantContent;
- (id)systemFontForControlSize:(unsigned long long)a0 weight:(double)a1;
- (struct CGSize { double x0; double x1; })_minimumSizeForStandardButton;
- (BOOL)_isBuiltinAppearance;
- (id)resolvedAppearanceForWidget:(id)a0 variant:(id)a1;
- (BOOL)_isFunctionRowAppearance;
- (id)_appearanceForNonVibrantContent;
- (id)initWithAppearances:(id)a0;
- (id)resolvedAppearanceForStyleName:(id)a0 styleConfiguration:(id)a1;
- (id)_coreUICatalog;
- (id)tintColor;
- (id)appearanceByApplyingTintColor:(id)a0;
- (double)_textGlyphBrightnessMultiplier;
- (unsigned long long)_textGlyphColorTemperature;
- (id)resolvedAppearanceForWidget:(id)a0 styleConfiguration:(id)a1;
- (BOOL)_backstoppedByFullAppearance;
- (id)resolvedAppearanceForCustomTintedWidget:(id)a0;
- (id)resolvedAppearanceForColor:(id)a0;
- (BOOL)_prefersSliderAccessoryStepBehavior;
- (BOOL)_prefersMoreHorizontalContentIndicators;
- (BOOL)_allowsSystemControlTintColors;
- (int)_callCoreUIWithBlock:(id /* block */)a0 options:(id)a1 requireBezelTintColor:(BOOL)a2;
- (id)compositeName;
- (id)_flattenedAppearanceNamesList;
- (void)_updateSystemTintColor;
- (id)_appearanceByMapping:(id /* block */)a0;

@end
