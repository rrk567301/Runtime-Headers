@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (float)settingAlphaSpeed;
- (float)settingGreenRange;
- (double)settingVelocityRange;
- (BOOL)settingEnabled;
- (void)setSettingGreenSpeed:(float)a0;
- (float)settingAlphaRange;
- (void)setSettingScale:(double)a0;
- (void)setSettingEnabled:(BOOL)a0;
- (void)setSettingMinificationFilterBias:(float)a0;
- (void)setSettingSpin:(double)a0;
- (void)setSettingYAcceleration:(double)a0;
- (void)setSettingXAcceleration:(double)a0;
- (void)setSettingName:(id)a0;
- (double)settingZAcceleration;
- (float)settingMinificationFilterBias;
- (float)settingRedRange;
- (double)settingScaleRange;
- (void)setSettingMagnificationFilter:(id)a0;
- (void)setSettingRedRange:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingAlphaRange:(float)a0;
- (float)settingLifetime;
- (void)setSettingColor:(id)a0;
- (void)setSettingSpinRange:(double)a0;
- (void)setSettingGreenRange:(float)a0;
- (void)setSettingScaleRange:(double)a0;
- (void)setSettingContents:(id)a0;
- (void)setSettingBlueRange:(float)a0;
- (void)setSettingRedSpeed:(float)a0;
- (void)setSettingLifetime:(float)a0;
- (double)settingScaleSpeed;
- (id)settingColor;
- (id)settingStyle;
- (id)initWithSettings:(id)a0;
- (float)settingRedSpeed;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)settingBirthRate;
- (double)settingXAcceleration;
- (double)settingVelocity;
- (void)setSettingMinificationFilter:(id)a0;
- (id)settingContents;
- (double)settingYAcceleration;
- (void)parentLoaded:(id)a0;
- (float)settingBlueRange;
- (void)setSettingEmissionLatitude:(double)a0;
- (void)setSettingBirthRate:(float)a0;
- (double)settingSpinRange;
- (void)setSettingVelocity:(double)a0;
- (id)settingEmitterCells;
- (void)setSettingLifetimeRange:(float)a0;
- (void)setSettingStyle:(id)a0;
- (void)setSettingEmissionLongitude:(double)a0;
- (double)settingEmissionLatitude;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingBlueSpeed:(float)a0;
- (id)settingName;
- (double)settingScale;
- (id)settingMinificationFilter;
- (void)setSettingVelocityRange:(double)a0;
- (void)setSettingEmissionRange:(double)a0;
- (float)settingGreenSpeed;
- (float)settingBlueSpeed;
- (void)dealloc;
- (float)settingLifetimeRange;
- (void)setSettingScaleSpeed:(double)a0;
- (double)settingSpin;
- (double)settingEmissionLongitude;
- (void)setSettingEmitterCells:(id)a0;
- (void)setSettingAlphaSpeed:(float)a0;
- (void)setSettingZAcceleration:(double)a0;
- (double)settingEmissionRange;
- (id)settingMagnificationFilter;

@end
