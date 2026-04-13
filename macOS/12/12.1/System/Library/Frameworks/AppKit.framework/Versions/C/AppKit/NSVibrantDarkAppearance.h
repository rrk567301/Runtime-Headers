@interface NSVibrantDarkAppearance : NSBuiltinAppearance

- (BOOL)_usesMetricsAppearance;
- (id)_appearanceForVibrantContent;
- (id)_appearanceForNonVibrantContent;

@end
