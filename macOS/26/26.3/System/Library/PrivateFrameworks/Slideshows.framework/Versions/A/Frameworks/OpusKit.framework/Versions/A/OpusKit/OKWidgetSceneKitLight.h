@class SCNLight;

@interface OKWidgetSceneKitLight : OKWidgetSceneKitNode {
    SCNLight *_light;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingColor:(id)a0;
- (id)settingColor;
- (void)dealloc;
- (id)settingType;
- (void)setSettingType:(id)a0;
- (void)setSettingCastsShadow:(BOOL)a0;
- (void)setSettingLightName:(id)a0;
- (void)setSettingShadowColor:(id)a0;
- (void)setSettingShadowRadius:(double)a0;
- (BOOL)settingCastsShadow;
- (id)settingLightName;
- (id)settingShadowColor;
- (double)settingShadowRadius;

@end
