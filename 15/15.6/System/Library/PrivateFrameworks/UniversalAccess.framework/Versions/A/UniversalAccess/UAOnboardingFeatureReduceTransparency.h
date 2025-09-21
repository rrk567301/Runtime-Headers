@interface UAOnboardingFeatureReduceTransparency : UAOnboardingSelectFromOptionsFeature

- (id)init;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { char x0; char x1; char x2; char x3; char x4; })a0;
- (id)_setupReduceTransparencyLocalizedImageViewWithImage:(id)a0 bundle:(id)a1;
- (long long)getSelectedOptionFromSystemSettings;
- (void)updateSystemSettingWithSelectedOption:(long long)a0;

@end
