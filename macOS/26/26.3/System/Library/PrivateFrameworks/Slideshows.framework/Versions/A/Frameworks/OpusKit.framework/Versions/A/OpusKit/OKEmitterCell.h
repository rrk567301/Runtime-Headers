@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (float)settingRedSpeed;
- (void)setSettingXAcceleration:(double)a0;
- (id)initWithSettings:(id)a0;
- (float)settingGreenRange;
- (void)setSettingGreenRange:(float)a0;
- (id)settingStyle;
- (float)settingAlphaSpeed;
- (id)settingEmitterCells;
- (double)settingEmissionLatitude;
- (void)setSettingEnabled:(BOOL)a0;
- (void)setSettingEmitterCells:(id)a0;
- (void)setSettingBlueRange:(float)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingYAcceleration;
- (double)settingSpin;
- (id)settingMagnificationFilter;
- (void)setSettingContents:(id)a0;
- (float)settingBirthRate;
- (double)settingScaleSpeed;
- (void)setSettingStyle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (void)setSettingGreenSpeed:(float)a0;
- (void)setSettingAlphaRange:(float)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingEmissionLongitude:(double)a0;
- (void)setSettingBirthRate:(float)a0;
- (void)setSettingRedRange:(float)a0;
- (void)setSettingAlphaSpeed:(float)a0;
- (float)settingLifetime;
- (double)settingScale;
- (void)setSettingVelocity:(double)a0;
- (void)setSettingScaleSpeed:(double)a0;
- (BOOL)settingEnabled;
- (float)settingLifetimeRange;
- (void)setSettingSpinRange:(double)a0;
- (float)settingRedRange;
- (float)settingMinificationFilterBias;
- (double)settingZAcceleration;
- (double)settingEmissionLongitude;
- (void)setSettingColor:(id)a0;
- (double)settingVelocityRange;
- (void)setSettingMagnificationFilter:(id)a0;
- (float)settingBlueRange;
- (void)setSettingBlueSpeed:(float)a0;
- (void)setSettingMinificationFilterBias:(float)a0;
- (id)settingName;
- (void)setSettingZAcceleration:(double)a0;
- (id)settingColor;
- (id)settingMinificationFilter;
- (void)setSettingSpin:(double)a0;
- (void)setSettingLifetime:(float)a0;
- (float)settingBlueSpeed;
- (double)settingScaleRange;
- (void)dealloc;
- (void)setSettingYAcceleration:(double)a0;
- (double)settingXAcceleration;
- (double)settingEmissionRange;
- (void)setSettingEmissionRange:(double)a0;
- (void)setSettingLifetimeRange:(float)a0;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSettingEmissionLatitude:(double)a0;
- (void)setSettingName:(id)a0;
- (float)settingAlphaRange;
- (double)settingSpinRange;
- (void)parentLoaded:(id)a0;
- (void)setSettingRedSpeed:(float)a0;
- (void)setSettingMinificationFilter:(id)a0;
- (void)setSettingVelocityRange:(double)a0;
- (float)settingGreenSpeed;
- (void)setSettingScaleRange:(double)a0;
- (id)settingContents;
- (double)settingVelocity;
- (void)setSettingScale:(double)a0;

@end
