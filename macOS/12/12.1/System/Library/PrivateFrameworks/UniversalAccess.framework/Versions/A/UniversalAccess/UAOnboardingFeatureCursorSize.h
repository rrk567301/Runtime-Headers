@interface UAOnboardingFeatureCursorSize : UAOnboardingSelectFromOptionsFeature

@property (nonatomic) double _smallestCursorSize;
@property (nonatomic) double _smallCursorSize;
@property (nonatomic) double _bigCursorSize;
@property (nonatomic) double _biggestCursorSize;

- (id)init;
- (void)updateSystemSettingWithSelectedOption:(long long)a0;
- (long long)getSelectedOptionFromSystemSettings;

@end
