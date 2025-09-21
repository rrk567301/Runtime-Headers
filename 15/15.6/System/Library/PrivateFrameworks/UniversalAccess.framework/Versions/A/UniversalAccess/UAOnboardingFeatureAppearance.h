@interface UAOnboardingFeatureAppearance : UAOnboardingSelectFromOptionsFeature

- (id)init;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { char x0; char x1; char x2; char x3; char x4; })a0;
- (long long)getSelectedOptionFromSystemSettings;
- (void)transitionToTheme:(unsigned int)a0;
- (void)updateSystemSettingWithSelectedOption:(long long)a0;

@end
