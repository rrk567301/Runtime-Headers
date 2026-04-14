@interface NSVibrantLightAppearance : NSBuiltinAppearance

- (id)_appearanceForNonVibrantContent;
- (id)_appearanceForVibrantContent;
- (BOOL)_isFauxVibrant;
- (BOOL)_usesMetricsAppearance;

@end
