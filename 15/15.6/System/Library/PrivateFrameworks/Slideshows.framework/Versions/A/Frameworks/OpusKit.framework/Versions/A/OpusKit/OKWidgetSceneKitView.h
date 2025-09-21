@class OKWidgetSceneKitCamera, NSString, NSDictionary, SCNView, NSArray, NSMutableArray;

@interface OKWidgetSceneKitView : OKWidgetView <OKCollectionProxyDataSource, OKWidgetSceneKitViewProxyExports> {
    char _scaleToFit;
    NSString *_didClickScript;
    NSArray *_geometries;
    NSArray *_lights;
    NSMutableArray *_blocks;
}

@property (copy, nonatomic) NSString *c3dFile;
@property (nonatomic) char playing;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) SCNView *sceneKitView;
@property (retain, nonatomic) OKWidgetSceneKitCamera *camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (void)layoutSubviews;
- (void)mouseDown:(id)a0;
- (char)prepareForDisplay:(char)a0;
- (id)initWithWidget:(id)a0;
- (void)addBlockToExecuteAfterAllNodesLoaded:(id /* block */)a0;
- (id)allKeysForDictionaryProxy:(id)a0;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)loadNodes;
- (void)loadSceneFromFile;
- (void)prepareForRefresh;
- (char)prepareForUnload:(char)a0;
- (char)prepareForWarmup:(char)a0;
- (void)setSettingAutoenablesDefaultLighting:(char)a0;
- (void)setSettingBackgroundColor:(id)a0;
- (void)setSettingC3dFile:(id)a0;
- (void)setSettingCamera:(id)a0;
- (void)setSettingDidClickScript:(id)a0;
- (void)setSettingGeometries:(id)a0;
- (void)setSettingJittering:(char)a0;
- (void)setSettingLights:(id)a0;
- (void)setSettingLoops:(char)a0;
- (void)setSettingOptions:(id)a0;
- (void)setSettingPlaying:(char)a0;
- (void)setSettingScaleToFit:(char)a0;
- (char)settingAutoenablesDefaultLighting;
- (id)settingBackgroundColor;
- (id)settingC3dFile;
- (id)settingCamera;
- (id)settingDidClickScript;
- (id)settingGeometries;
- (char)settingJittering;
- (id)settingLights;
- (char)settingLoops;
- (id)settingObjectForKey:(id)a0;
- (id)settingOptions;
- (char)settingPlaying;
- (char)settingScaleToFit;
- (void)setupScene;

@end
