@class NSImageView;

@interface UAOnboardingFeatureHoverText : UAOnboardingImageEnableFeature

@property (retain, nonatomic) NSImageView *_hoverTextHUDView;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isFeatureEnabled;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (void)_setupLocalizedText;
- (void)disableFeature;
- (void)enableFeature;

@end
