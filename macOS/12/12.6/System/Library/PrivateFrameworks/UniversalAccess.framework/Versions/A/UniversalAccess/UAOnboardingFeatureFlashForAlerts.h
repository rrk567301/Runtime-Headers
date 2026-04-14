@interface UAOnboardingFeatureFlashForAlerts : UAOnboardingImageEnableFeature

- (id)init;
- (BOOL)isFeatureEnabled;
- (void)enableFeature;
- (void)disableFeature;

@end
