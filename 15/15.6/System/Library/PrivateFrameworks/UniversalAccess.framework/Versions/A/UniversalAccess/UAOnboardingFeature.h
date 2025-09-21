@class NSString, UAOnboardingAccessibilitySettingsManager;

@interface UAOnboardingFeature : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *buddyTitle;
@property (copy, nonatomic) NSString *buddyDescription;
@property (retain, nonatomic) UAOnboardingAccessibilitySettingsManager *accessibilitySettingsManager;

- (void).cxx_destruct;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { char x0; char x1; char x2; char x3; char x4; })a0;
- (id)createFeatureImageStringFromSettings:(struct UAOnboardingAccessibilitySettings { char x0; char x1; char x2; char x3; char x4; })a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 description:(id)a2;

@end
