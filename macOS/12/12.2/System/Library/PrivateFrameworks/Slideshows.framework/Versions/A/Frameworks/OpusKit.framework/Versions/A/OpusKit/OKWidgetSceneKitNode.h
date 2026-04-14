@class OKWidgetSceneKitView, NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface OKWidgetSceneKitNode : SCNNode <OKSettingsSupport, OKWidgetSceneKitViewProxyExports> {
    NSString *_c3dFile;
    NSArray *_nodeNames;
    NSDictionary *_animationsPath;
    NSMutableDictionary *_animations;
    NSDictionary *_options;
    NSArray *_constraints;
}

@property (nonatomic) OKWidgetSceneKitView *widgetScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setupConstraints;
- (id)settingName;
- (void)setSettingName:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (struct SCNVector3 { double x0; double x1; double x2; })settingScale;
- (void)setSettingScale:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)loadSettings:(id)a0;
- (struct SCNVector3 { double x0; double x1; double x2; })settingPosition;
- (void)setSettingPosition:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (struct SCNVector4 { double x0; double x1; double x2; double x3; })settingRotation;
- (void)setSettingRotation:(struct SCNVector4 { double x0; double x1; double x2; double x3; })a0;
- (double)settingOpacity;
- (void)setSettingOpacity:(double)a0;
- (BOOL)settingHidden;
- (void)setSettingHidden:(BOOL)a0;
- (id)settingChildNodes;
- (void)setSettingChildNodes:(id)a0;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)allKeysForDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)parentLoaded;
- (id)settingC3dFile;
- (void)setSettingC3dFile:(id)a0;
- (id)settingOptions;
- (void)setSettingOptions:(id)a0;
- (void)setSettingNodeNames:(id)a0;
- (void)setSettingAnimations:(id)a0;
- (void)setSettingConstraints:(id)a0;
- (void)setupFile;
- (void)setupAnimations;
- (void)setupOptions;
- (void)playAnimationWithKey:(id)a0 removeOnCompletion:(BOOL)a1;
- (id)settingNodeNames;
- (id)settingAnimations;
- (id)settingConstraints;

@end
