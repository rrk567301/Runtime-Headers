@interface UAOnboardingFeatureVoiceOver : UAOnboardingImageEnableFeature

- (id)init;
- (void)updateFeatureImageWithSettings:(struct AccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (void)enableFeature;
- (void)disableFeature;
- (BOOL)isFeatureEnabled;

@end
