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
- (void)setSettingMinificationFilter:(long long)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (long long)settingMinificationFilter;
- (long long)settingMagnificationFilter;
- (void)setSettingMagnificationFilter:(long long)a0;
- (void)applyPropertyOnMaterial:(id)a0 withSceneKitView:(id)a1;
- (void)setSettingBorderColor:(id)a0;
- (void)setSettingColorContents:(id)a0;
- (void)setSettingContentsTransform:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (void)setSettingIntensity:(double)a0;
- (void)setSettingLayerContent:(id)a0;
- (void)setSettingMappingChannel:(long long)a0;
- (void)setSettingMipFilter:(long long)a0;
- (void)setSettingURLContent:(id)a0;
- (void)setSettingWrapS:(long long)a0;
- (void)setSettingWrapT:(long long)a0;
- (id)settingBorderColor;
- (id)settingColorContents;
- (struct SCNVector3 { double x0; double x1; double x2; })settingContentsTransform;
- (double)settingIntensity;
- (id)settingLayerContent;
- (long long)settingMappingChannel;
- (long long)settingMipFilter;
- (id)settingURLContent;
- (long long)settingWrapS;
- (long long)settingWrapT;

@end
