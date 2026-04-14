@interface UAOnboardingFeatureVoiceControl : UAOnboardingImageEnableFeature

- (id)init;
- (void)disableFeature;
- (void)enableFeature;
- (BOOL)isFeatureEnabled;

@end
