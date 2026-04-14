@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (double)settingScaleSpeed;
- (BOOL)settingEnabled;
- (void)setSettingStyle:(id)a0;
- (float)settingBirthRate;
- (float)settingAlphaSpeed;
- (void)setSettingBirthRate:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (id)settingContents;
- (void)setSettingLifetime:(float)a0;
- (void)setSettingYAcceleration:(double)a0;
- (void)setSettingGreenRange:(float)a0;
- (double)settingYAcceleration;
- (void)setSettingLifetimeRange:(float)a0;
- (void)setSettingScaleRange:(double)a0;
- (void)setSettingVelocityRange:(double)a0;
- (void)setSettingGreenSpeed:(float)a0;
- (void)setSettingAlphaRange:(float)a0;
- (double)settingZAcceleration;
- (id)initWithSettings:(id)a0;
- (void)setSettingSpin:(double)a0;
- (float)settingGreenRange;
- (double)settingScale;
- (void)setSettingBlueSpeed:(float)a0;
- (void)setSettingColor:(id)a0;
- (id)settingEmitterCells;
- (void)setSettingRedSpeed:(float)a0;
- (void)setSettingVelocity:(double)a0;
- (double)settingSpin;
- (double)settingSpinRange;
- (float)settingRedRange;
- (void)setSettingAlphaSpeed:(float)a0;
- (id)settingMagnificationFilter;
- (double)settingEmissionLatitude;
- (void)setSettingScaleSpeed:(double)a0;
- (void)setSettingEmissionLatitude:(double)a0;
- (double)settingVelocity;
- (void)setSettingEmitterCells:(id)a0;
- (void)setSettingEnabled:(BOOL)a0;
- (float)settingGreenSpeed;
- (void)setSettingName:(id)a0;
- (double)settingEmissionRange;
- (id)settingStyle;
- (double)settingEmissionLongitude;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (float)settingAlphaRange;
- (void)setSettingEmissionRange:(double)a0;
- (float)settingLifetimeRange;
- (float)settingRedSpeed;
- (float)settingLifetime;
- (id)settingName;
- (void)setSettingSpinRange:(double)a0;
- (void)setSettingZAcceleration:(double)a0;
- (void)setSettingScale:(double)a0;
- (void)parentLoaded:(id)a0;
- (double)settingXAcceleration;
- (void)setSettingMinificationFilterBias:(float)a0;
- (double)settingScaleRange;
- (void)setSettingMagnificationFilter:(id)a0;
- (void)setSettingContents:(id)a0;
- (void)dealloc;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSettingEmissionLongitude:(double)a0;
- (void)setSettingXAcceleration:(double)a0;
- (float)settingBlueRange;
- (float)settingBlueSpeed;
- (id)settingColor;
- (void)setSettingMinificationFilter:(id)a0;
- (void)setSettingBlueRange:(float)a0;
- (void)setSettingRedRange:(float)a0;
- (id)settingMinificationFilter;
- (float)settingMinificationFilterBias;
- (id)settingObjectForKey:(id)a0;
- (double)settingVelocityRange;

@end
