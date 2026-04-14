@class SCNLight;

@interface OKWidgetSceneKitLight : OKWidgetSceneKitNode {
    SCNLight *_light;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingType;
- (void)setSettingType:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingColor;
- (void)setSettingColor:(id)a0;
- (id)settingLightName;
- (void)setSettingLightName:(id)a0;
- (double)settingShadowRadius;
- (void)setSettingShadowRadius:(double)a0;
- (id)settingShadowColor;
- (void)setSettingShadowColor:(id)a0;
- (BOOL)settingCastsShadow;
- (void)setSettingCastsShadow:(BOOL)a0;

@end
