@class SCNLight;

@interface OKWidgetSceneKitLight : OKWidgetSceneKitNode {
    SCNLight *_light;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingType;
- (id)settingObjectForKey:(id)a0;
- (void)setSettingColor:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingColor;
- (void)setSettingLightName:(id)a0;
- (void)setSettingType:(id)a0;
- (void)setSettingShadowRadius:(double)a0;
- (void)setSettingShadowColor:(id)a0;
- (void)setSettingCastsShadow:(BOOL)a0;
- (id)settingLightName;
- (double)settingShadowRadius;
- (id)settingShadowColor;
- (BOOL)settingCastsShadow;

@end
