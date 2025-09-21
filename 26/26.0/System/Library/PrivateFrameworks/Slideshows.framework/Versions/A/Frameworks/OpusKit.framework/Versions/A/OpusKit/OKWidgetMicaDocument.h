@class NSDictionary, CALayer, NSString;

@interface OKWidgetMicaDocument : NSObject <OKSettingsSupport>

@property (retain, nonatomic) NSDictionary *rootDictionary;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSDictionary *publishedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)publishedObjectNames;
- (void)dealloc;
- (id)publishedObjectWithName:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (id)initWithURL:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)documentHeight;
- (id)settingsForKey:(id)a0;
- (void)applySettings:(id)a0 withResolution:(id)a1;
- (double)documentWidth;

@end
