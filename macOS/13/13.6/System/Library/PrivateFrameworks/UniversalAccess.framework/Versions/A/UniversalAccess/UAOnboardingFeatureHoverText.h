@class NSImageView;

@interface UAOnboardingFeatureHoverText : UAOnboardingImageEnableFeature

@property (retain, nonatomic) NSImageView *_hoverTextHUDView;

- (id)init;
- (void).cxx_destruct;
- (void)updateFeatureImageWithSettings:(struct AccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (void)_setupLocalizedText;
- (void)disableFeature;
- (void)enableFeature;
- (BOOL)isFeatureEnabled;

@end
