@class NSString, NSImage, NSViewController, UAOnboardingLocalizedImageViewController;

@interface UAOnboardingImageEnableFeature : UAOnboardingFeature

@property (retain, nonatomic) NSString *enableCheckboxTitle;
@property (retain, nonatomic) NSImage *featureImage;
@property (retain, nonatomic) UAOnboardingLocalizedImageViewController *localizedImageViewController;
@property (retain, nonatomic) NSViewController *customViewController;

- (void).cxx_destruct;
- (BOOL)isFeatureEnabled;
- (id)initWithIdentifier:(id)a0 title:(id)a1 description:(id)a2;
- (void)enableFeature;
- (void)disableFeature;

@end
