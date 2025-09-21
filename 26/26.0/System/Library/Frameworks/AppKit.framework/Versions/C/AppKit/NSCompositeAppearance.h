@class NSArray, NSString, NSAppearance;

@interface NSCompositeAppearance : NSAppearance {
    NSArray *_appearances;
    NSString *_compositeName;
    NSAppearance *_pushButtonAppearance;
}

@property (copy) NSArray *appearances;
@property (copy) NSString *name;

+ (id)compositeAppearanceForView:(id)a0;

- (id)debugDescription;
- (BOOL)allowsVibrancy;
- (void)dealloc;
- (double)systemFontSizeForControlSize:(unsigned long long)a0;
- (id)tintColor;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)bestMatchFromAppearancesWithNames:(id)a0;
- (id)_appearanceForNonVibrantContent;
- (double)_maxScaleFactor;
- (BOOL)_allowsSystemControlTintColors;
- (BOOL)_allowsVibrancyForColor:(id)a0;
- (id)_appearanceByMapping:(id /* block */)a0;
- (id)_appearanceDisablingSolarium;
- (id)_appearanceForVibrantContent;
- (id)_appearancePreferringSolarium;
- (BOOL)_backstoppedByFullAppearance;
- (int)_callCoreUIWithBlock:(id /* block */)a0 options:(id)a1 requireBezelTintColor:(BOOL)a2;
- (id)_coreUICatalog;
- (int)_defaultBlendMode;
- (id)_flattenedAppearanceNamesList;
- (BOOL)_isBuiltinAppearance;
- (BOOL)_isFauxVibrant;
- (BOOL)_isFunctionRowAppearance;
- (BOOL)_isTintedWithLightColor;
- (struct CGSize { double x0; double x1; })_minimumSizeForStandardButton;
- (BOOL)_prefersMoreHorizontalContentIndicators;
- (BOOL)_prefersSliderAccessoryStepBehavior;
- (double)_textGlyphBrightnessMultiplier;
- (unsigned long long)_textGlyphColorTemperature;
- (void)_updateSystemTintColor;
- (BOOL)_usesMetricsAppearance;
- (BOOL)_wantsSolarium;
- (id)appearanceByApplyingTintColor:(id)a0;
- (id)compositeName;
- (id)initWithAppearances:(id)a0;
- (id)resolvedAppearanceForColor:(id)a0;
- (id)resolvedAppearanceForCustomTintedWidget:(id)a0;
- (id)resolvedAppearanceForStyleName:(id)a0 styleConfiguration:(id)a1;
- (id)resolvedAppearanceForWidget:(id)a0 styleConfiguration:(id)a1;
- (id)resolvedAppearanceForWidget:(id)a0 variant:(id)a1;
- (id)systemFontForControlSize:(unsigned long long)a0 weight:(double)a1;

@end
