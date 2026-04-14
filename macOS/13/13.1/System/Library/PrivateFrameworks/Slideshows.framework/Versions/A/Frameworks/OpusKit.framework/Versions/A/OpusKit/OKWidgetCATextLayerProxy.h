@class NSString;

@interface OKWidgetCATextLayerProxy : OKWidgetCALayerProxy <OKSettingsSupport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (id)init;
- (id)settingObjectForKey:(id)a0;
- (id)settingString;
- (void)setSettingString:(id)a0;

@end
