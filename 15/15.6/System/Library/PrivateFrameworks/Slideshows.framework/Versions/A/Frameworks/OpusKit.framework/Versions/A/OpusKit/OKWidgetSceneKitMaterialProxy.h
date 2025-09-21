@class OKWidgetSceneKitView, NSString, SCNMaterial, NSMutableDictionary;

@interface OKWidgetSceneKitMaterialProxy : NSObject <OKSettingsSupport> {
    OKWidgetSceneKitView *_widgetScene;
    NSMutableDictionary *_materialPropertiesToApply;
}

@property (readonly, retain, nonatomic) SCNMaterial *material;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyForMaterial:(id)a0 widgetScene:(id)a1;
+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (id)settingName;
- (void)setSettingName:(id)a0;
- (id)settingEmission;
- (id)settingMultiply;
- (id)settingSpecular;
- (id)initWithMaterial:(id)a0 widgetScene:(id)a1;
- (void)loadMaterialProperties;
- (void)setSettingAmbient:(id)a0;
- (void)setSettingDiffuse:(id)a0;
- (void)setSettingDoubleSided:(char)a0;
- (void)setSettingEmission:(id)a0;
- (void)setSettingLightingModelName:(id)a0;
- (void)setSettingLitPerPixel:(char)a0;
- (void)setSettingLocksAmbientWithDiffuse:(char)a0;
- (void)setSettingMultiply:(id)a0;
- (void)setSettingNormal:(id)a0;
- (void)setSettingReflective:(id)a0;
- (void)setSettingShininess:(double)a0;
- (void)setSettingSpecular:(id)a0;
- (void)setSettingTransparency:(double)a0;
- (void)setSettingTransparencyMode:(long long)a0;
- (void)setSettingTransparent:(id)a0;
- (void)setSettingWritesToDepthBuffer:(char)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingAmbient;
- (id)settingDiffuse;
- (char)settingDoubleSided;
- (id)settingLightingModelName;
- (char)settingLitPerPixel;
- (char)settingLocksAmbientWithDiffuse;
- (id)settingNormal;
- (id)settingObjectForKey:(id)a0;
- (id)settingReflective;
- (double)settingShininess;
- (double)settingTransparency;
- (long long)settingTransparencyMode;
- (id)settingTransparent;
- (char)settingWritesToDepthBuffer;

@end
