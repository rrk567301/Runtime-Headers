@interface UAOnboardingFeatureVoiceControl : UAOnboardingImageEnableFeature

- (id)init;
- (char)isFeatureEnabled;
- (void)disableFeature;
- (void)enableFeature;

@end
