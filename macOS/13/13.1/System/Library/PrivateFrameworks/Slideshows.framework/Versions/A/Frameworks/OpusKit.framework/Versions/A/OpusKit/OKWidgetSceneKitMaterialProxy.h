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

+ (id)supportedSettings;
+ (id)proxyForMaterial:(id)a0 widgetScene:(id)a1;

- (void)dealloc;
- (id)init;
- (id)settingName;
- (void)setSettingName:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)initWithMaterial:(id)a0 widgetScene:(id)a1;
- (void)loadMaterialProperties;
- (id)settingAmbient;
- (void)setSettingAmbient:(id)a0;
- (id)settingDiffuse;
- (void)setSettingDiffuse:(id)a0;
- (BOOL)settingDoubleSided;
- (void)setSettingDoubleSided:(BOOL)a0;
- (id)settingEmission;
- (void)setSettingEmission:(id)a0;
- (id)settingLightingModelName;
- (void)setSettingLightingModelName:(id)a0;
- (BOOL)settingLitPerPixel;
- (void)setSettingLitPerPixel:(BOOL)a0;
- (BOOL)settingLocksAmbientWithDiffuse;
- (void)setSettingLocksAmbientWithDiffuse:(BOOL)a0;
- (id)settingMultiply;
- (void)setSettingMultiply:(id)a0;
- (id)settingNormal;
- (void)setSettingNormal:(id)a0;
- (id)settingReflective;
- (void)setSettingReflective:(id)a0;
- (double)settingShininess;
- (void)setSettingShininess:(double)a0;
- (id)settingSpecular;
- (void)setSettingSpecular:(id)a0;
- (double)settingTransparency;
- (void)setSettingTransparency:(double)a0;
- (long long)settingTransparencyMode;
- (void)setSettingTransparencyMode:(long long)a0;
- (id)settingTransparent;
- (void)setSettingTransparent:(id)a0;
- (BOOL)settingWritesToDepthBuffer;
- (void)setSettingWritesToDepthBuffer:(BOOL)a0;

@end
