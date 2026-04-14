@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (void)setSettingGreenSpeed:(float)a0;
- (id)settingColor;
- (float)settingAlphaRange;
- (double)settingScale;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSettingEnabled:(BOOL)a0;
- (void)setSettingEmissionLongitude:(double)a0;
- (float)settingRedSpeed;
- (double)settingSpin;
- (float)settingAlphaSpeed;
- (double)settingEmissionRange;
- (float)settingBirthRate;
- (void)setSettingScaleRange:(double)a0;
- (void)setSettingLifetimeRange:(float)a0;
- (void)setSettingZAcceleration:(double)a0;
- (float)settingBlueRange;
- (void)setSettingBlueSpeed:(float)a0;
- (void)setSettingSpinRange:(double)a0;
- (float)settingRedRange;
- (void)setSettingColor:(id)a0;
- (id)settingMinificationFilter;
- (void)setSettingBirthRate:(float)a0;
- (void)parentLoaded:(id)a0;
- (id)settingStyle;
- (double)settingScaleSpeed;
- (void)setSettingGreenRange:(float)a0;
- (double)settingEmissionLatitude;
- (id)settingEmitterCells;
- (double)settingXAcceleration;
- (void)setSettingEmissionLatitude:(double)a0;
- (void)setSettingBlueRange:(float)a0;
- (void)setSettingYAcceleration:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (void)setSettingVelocityRange:(double)a0;
- (double)settingScaleRange;
- (void)setSettingSpin:(double)a0;
- (float)settingGreenSpeed;
- (float)settingMinificationFilterBias;
- (void)setSettingMinificationFilter:(id)a0;
- (id)settingMagnificationFilter;
- (void)setSettingMinificationFilterBias:(float)a0;
- (void)setSettingVelocity:(double)a0;
- (void)setSettingXAcceleration:(double)a0;
- (void)setSettingStyle:(id)a0;
- (id)settingName;
- (void)setSettingScaleSpeed:(double)a0;
- (void)setSettingRedSpeed:(float)a0;
- (void)setSettingEmitterCells:(id)a0;
- (void)setSettingRedRange:(float)a0;
- (float)settingLifetime;
- (BOOL)settingEnabled;
- (float)settingBlueSpeed;
- (double)settingSpinRange;
- (void)setSettingAlphaRange:(float)a0;
- (void)setSettingEmissionRange:(double)a0;
- (float)settingLifetimeRange;
- (double)settingVelocity;
- (double)settingVelocityRange;
- (double)settingZAcceleration;
- (void)setSettingContents:(id)a0;
- (void)setSettingName:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingAlphaSpeed:(float)a0;
- (id)settingContents;
- (float)settingGreenRange;
- (void)setSettingLifetime:(float)a0;
- (void)setSettingMagnificationFilter:(id)a0;
- (void)setSettingScale:(double)a0;
- (double)settingYAcceleration;
- (double)settingEmissionLongitude;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;

@end
