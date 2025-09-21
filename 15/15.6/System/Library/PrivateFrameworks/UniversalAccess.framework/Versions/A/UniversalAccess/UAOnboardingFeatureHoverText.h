@class NSImageView;

@interface UAOnboardingFeatureHoverText : UAOnboardingImageEnableFeature

@property (retain, nonatomic) NSImageView *_hoverTextHUDView;

- (id)init;
- (void).cxx_destruct;
- (char)isFeatureEnabled;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { char x0; char x1; char x2; char x3; char x4; })a0;
- (void)_setupLocalizedText;
- (void)disableFeature;
- (void)enableFeature;

@end
