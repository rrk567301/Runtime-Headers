@class CALayer, NSString;

@interface OKWidgetCALayerProxy : NSObject <OKSettingsSupport>

@property (readonly, retain, nonatomic) CALayer *layer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyForLayer:(id)a0;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithLayer:(id)a0;
- (id)init;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;

@end
