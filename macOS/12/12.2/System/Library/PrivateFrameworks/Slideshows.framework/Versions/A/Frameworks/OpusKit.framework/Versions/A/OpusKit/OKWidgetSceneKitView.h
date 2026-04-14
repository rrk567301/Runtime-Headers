@class OKWidgetSceneKitCamera, NSString, NSDictionary, SCNView, NSArray, NSMutableArray;

@interface OKWidgetSceneKitView : OKWidgetView <OKCollectionProxyDataSource, OKWidgetSceneKitViewProxyExports> {
    BOOL _scaleToFit;
    NSString *_didClickScript;
    NSArray *_geometries;
    NSArray *_lights;
    NSMutableArray *_blocks;
}

@property (copy, nonatomic) NSString *c3dFile;
@property (nonatomic) BOOL playing;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) SCNView *sceneKitView;
@property (retain, nonatomic) OKWidgetSceneKitCamera *camera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (void)mouseDown:(id)a0;
- (void)layoutSubviews;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)initWithWidget:(id)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (void)prepareForRefresh;
- (id)settingObjectForKey:(id)a0;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)allKeysForDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)setupScene;
- (void)loadSceneFromFile;
- (void)loadNodes;
- (void)addBlockToExecuteAfterAllNodesLoaded:(id /* block */)a0;
- (id)settingDidClickScript;
- (void)setSettingDidClickScript:(id)a0;
- (id)settingC3dFile;
- (void)setSettingC3dFile:(id)a0;
- (BOOL)settingPlaying;
- (void)setSettingPlaying:(BOOL)a0;
- (BOOL)settingLoops;
- (void)setSettingLoops:(BOOL)a0;
- (id)settingOptions;
- (void)setSettingOptions:(id)a0;
- (BOOL)settingScaleToFit;
- (void)setSettingScaleToFit:(BOOL)a0;
- (id)settingCamera;
- (void)setSettingCamera:(id)a0;
- (id)settingGeometries;
- (void)setSettingGeometries:(id)a0;
- (id)settingLights;
- (void)setSettingLights:(id)a0;
- (BOOL)settingJittering;
- (void)setSettingJittering:(BOOL)a0;
- (BOOL)settingAutoenablesDefaultLighting;
- (void)setSettingAutoenablesDefaultLighting:(BOOL)a0;
- (id)settingBackgroundColor;
- (void)setSettingBackgroundColor:(id)a0;

@end
