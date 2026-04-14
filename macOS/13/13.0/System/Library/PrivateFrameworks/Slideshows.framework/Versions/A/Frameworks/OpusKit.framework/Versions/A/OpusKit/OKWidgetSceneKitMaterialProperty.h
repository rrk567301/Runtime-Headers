@class NSString, NSMutableDictionary, OKWidgetView;

@interface OKWidgetSceneKitMaterialProperty : NSObject <OKSettingsSupport> {
    NSMutableDictionary *_materialProperties;
    OKWidgetView *_widgetView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (long long)settingMagnificationFilter;
- (void)setSettingMagnificationFilter:(long long)a0;
- (long long)settingMinificationFilter;
- (void)setSettingMinificationFilter:(long long)a0;
- (void)applyPropertyOnMaterial:(id)a0 withSceneKitView:(id)a1;
- (id)settingBorderColor;
- (void)setSettingBorderColor:(id)a0;
- (id)settingColorContents;
- (void)setSettingColorContents:(id)a0;
- (void)setSettingContentsTransform:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (struct SCNVector3 { double x0; double x1; double x2; })settingContentsTransform;
- (id)settingURLContent;
- (void)setSettingURLContent:(id)a0;
- (id)settingLayerContent;
- (void)setSettingLayerContent:(id)a0;
- (long long)settingMappingChannel;
- (void)setSettingMappingChannel:(long long)a0;
- (long long)settingMipFilter;
- (void)setSettingMipFilter:(long long)a0;
- (long long)settingWrapS;
- (void)setSettingWrapS:(long long)a0;
- (long long)settingWrapT;
- (void)setSettingWrapT:(long long)a0;
- (double)settingIntensity;
- (void)setSettingIntensity:(double)a0;

@end
