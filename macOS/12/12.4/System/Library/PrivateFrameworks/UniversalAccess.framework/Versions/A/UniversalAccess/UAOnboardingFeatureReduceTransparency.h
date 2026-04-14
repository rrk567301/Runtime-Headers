@interface UAOnboardingFeatureReduceTransparency : UAOnboardingSelectFromOptionsFeature

- (id)init;
- (void)updateFeatureImageWithSettings:(struct AccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (void)updateSystemSettingWithSelectedOption:(long long)a0;
- (long long)getSelectedOptionFromSystemSettings;
- (id)_setupReduceTransparencyLocalizedImageViewWithImage:(id)a0 bundle:(id)a1;

@end
