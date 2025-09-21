@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (float)settingGreenRange;
- (double)settingSpinRange;
- (void)dealloc;
- (double)settingSpin;
- (float)settingAlphaRange;
- (id)initWithSettings:(id)a0;
- (float)settingRedRange;
- (float)settingRedSpeed;
- (void)setSettingContents:(id)a0;
- (void)setSettingScaleSpeed:(double)a0;
- (void)setSettingMinificationFilter:(id)a0;
- (double)settingEmissionRange;
- (float)settingLifetimeRange;
- (void)setSettingRedRange:(float)a0;
- (double)settingEmissionLongitude;
- (void)setSettingColor:(id)a0;
- (void)setSettingName:(id)a0;
- (void)setSettingXAcceleration:(double)a0;
- (void)setSettingEnabled:(BOOL)a0;
- (void)setSettingVelocityRange:(double)a0;
- (id)settingColor;
- (double)settingEmissionLatitude;
- (void)setSettingEmissionLongitude:(double)a0;
- (void)setSettingScale:(double)a0;
- (id)settingName;
- (void)setSettingBlueRange:(float)a0;
- (void)parentLoaded:(id)a0;
- (float)settingAlphaSpeed;
- (void)setSettingZAcceleration:(double)a0;
- (void)setSettingAlphaSpeed:(float)a0;
- (void)setSettingLifetime:(float)a0;
- (double)settingScaleRange;
- (void)setSettingSpinRange:(double)a0;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)settingYAcceleration;
- (float)settingLifetime;
- (void)setSettingYAcceleration:(double)a0;
- (void)setSettingLifetimeRange:(float)a0;
- (double)settingVelocityRange;
- (double)settingScale;
- (id)settingEmitterCells;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (void)setSettingBlueSpeed:(float)a0;
- (void)setSettingEmitterCells:(id)a0;
- (void)setSettingGreenRange:(float)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingGreenSpeed:(float)a0;
- (void)setSettingEmissionLatitude:(double)a0;
- (void)setSettingMinificationFilterBias:(float)a0;
- (void)setSettingAlphaRange:(float)a0;
- (float)settingBlueRange;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (BOOL)settingEnabled;
- (void)setSettingEmissionRange:(double)a0;
- (id)settingContents;
- (float)settingGreenSpeed;
- (void)setSettingSpin:(double)a0;
- (void)setSettingRedSpeed:(float)a0;
- (float)settingBlueSpeed;
- (void)setSettingBirthRate:(float)a0;
- (void)setSettingVelocity:(double)a0;
- (double)settingZAcceleration;
- (float)settingBirthRate;
- (id)settingStyle;
- (float)settingMinificationFilterBias;
- (void)setSettingScaleRange:(double)a0;
- (id)settingMinificationFilter;
- (id)settingMagnificationFilter;
- (double)settingScaleSpeed;
- (double)settingXAcceleration;
- (void)setSettingStyle:(id)a0;
- (void)setSettingMagnificationFilter:(id)a0;
- (double)settingVelocity;

@end
