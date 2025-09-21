@interface UAOnboardingFeatureVoiceOver : UAOnboardingImageEnableFeature

- (id)init;
- (char)isFeatureEnabled;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { char x0; char x1; char x2; char x3; char x4; })a0;
- (void)disableFeature;
- (void)enableFeature;

@end
