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
- (BOOL)allowsVibrancy;
- (BOOL)_isFunctionRowAppearance;
- (id)tintColor;
- (BOOL)_usesMetricsAppearance;
- (struct CGSize { double x0; double x1; })_minimumSizeForStandardButton;
- (double)systemFontSizeForControlSize:(unsigned long long)a0;
- (id)systemFontForControlSize:(unsigned long long)a0 weight:(double)a1;
- (id)appearanceByApplyingTintColor:(id)a0;
- (id)_coreUICatalog;
- (id)_appearanceForVibrantContent;
- (id)_appearanceForNonVibrantContent;
- (BOOL)_backstoppedByFullAppearance;
- (id)_flattenedAppearanceNamesList;
- (int)_callCoreUIWithBlock:(id /* block */)a0 options:(id)a1 requireBezelTintColor:(BOOL)a2;
- (int)_defaultBlendMode;
- (id)resolvedAppearanceForWidget:(id)a0 variant:(id)a1;
- (id)resolvedAppearanceForCustomTintedWidget:(id)a0;
- (id)resolvedAppearanceForWidget:(id)a0 styleConfiguration:(id)a1;
- (id)resolvedAppearanceForStyleName:(id)a0 styleConfiguration:(id)a1;
- (id)resolvedAppearanceForColor:(id)a0;
- (BOOL)_isBuiltinAppearance;
- (BOOL)_allowsVibrancyForColor:(id)a0;
- (double)_textGlyphBrightnessMultiplier;
- (unsigned long long)_textGlyphColorTemperature;
- (BOOL)_prefersMoreHorizontalContentIndicators;
- (BOOL)_prefersSliderAccessoryStepBehavior;
- (BOOL)_allowsSystemControlTintColors;
- (id)initWithAppearances:(id)a0;
- (id)_appearanceByMapping:(id /* block */)a0;
- (id)compositeName;
- (void)_updateSystemTintColor;

@end
