@interface UAOnboardingFeatureFlashForAlerts : UAOnboardingImageEnableFeature

- (id)init;
- (void)enableFeature;
- (void)disableFeature;
- (BOOL)isFeatureEnabled;

@end
