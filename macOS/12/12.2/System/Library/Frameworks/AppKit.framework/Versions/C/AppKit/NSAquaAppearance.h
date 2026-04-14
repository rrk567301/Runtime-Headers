@interface NSAquaAppearance : NSBuiltinAppearance

- (BOOL)_usesMetricsAppearance;
- (id)_appearanceForVibrantContent;
- (id)_appearanceForNonVibrantContent;

@end
