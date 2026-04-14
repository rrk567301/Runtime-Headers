@class OFEmitterView;

@interface OKWidgetEmitterView : OKWidgetView {
    OFEmitterView *_emitterView;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (double)settingSpin;
- (void)setSettingScale:(double)a0;
- (void)setSettingLifetime:(double)a0;
- (double)settingLifetime;
- (double)settingScale;
- (id)settingEmitterCells;
- (void)setSettingEmitterCells:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingSpin:(double)a0;
- (void)setSettingBirthRate:(double)a0;
- (void)setSettingVelocity:(double)a0;
- (double)settingBirthRate;
- (double)settingVelocity;
- (id)initWithWidget:(id)a0;
- (void)setSettingSeed:(double)a0;
- (void)setSettingEmitterDepth:(double)a0;
- (void)setSettingEmitterMode:(id)a0;
- (void)setSettingEmitterPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setSettingEmitterShape:(id)a0;
- (void)setSettingEmitterSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSettingEmitterZPosition:(double)a0;
- (void)setSettingRenderMode:(id)a0;
- (double)settingEmitterDepth;
- (id)settingEmitterMode;
- (struct CGPoint { double x0; double x1; })settingEmitterPosition;
- (id)settingEmitterShape;
- (struct CGSize { double x0; double x1; })settingEmitterSize;
- (double)settingEmitterZPosition;
- (id)settingRenderMode;
- (double)settingSeed;

@end
