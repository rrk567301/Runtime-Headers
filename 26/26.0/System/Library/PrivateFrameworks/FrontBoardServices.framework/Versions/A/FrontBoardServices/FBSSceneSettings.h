@class FBSDisplayIdentity, NSSet, FBSDisplayConfiguration, BSKeyedSettings;
@protocol FBSceneClientProcess;

@interface FBSSceneSettings : FBSSettings <FBSSceneSettings, NSCopying, NSMutableCopying> {
    NSSet *_ignoreOcclusionReasons;
}

@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (nonatomic, getter=isClientFuture) BOOL clientFuture;
@property (retain, nonatomic) id<FBSceneClientProcess> clientProcess;
@property (readonly, nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (readonly, nonatomic) char jetsamMode;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic) long long interruptionPolicy;
@property (readonly, nonatomic) unsigned short jetsamPriority;
@property (nonatomic) char activityMode;
@property (nonatomic) BOOL prefersProcessTaskSuspensionWhileSceneForeground;
@property (retain, nonatomic) BSKeyedSettings *propagatedSettings;

+ (Class)subclassExtension;
+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (id)settings;
+ (Class)immutableSubclass;
+ (Class)_mutableClass;
+ (Class)mutableSubclass;
+ (Class)_baseClass;
+ (Class)_diffClass;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (void)_appendToDescriptionBuilder:(id)a0;
- (BOOL)_hasAdditionalDescription;
- (BOOL)_isEmptyForCoding:(BOOL)a0;
- (BOOL)_isEqualToSettings:(id)a0;
- (id)_propagatedSettings;
- (id)ignoreOcclusionReasons;
- (BOOL)isIgnoringOcclusions;
- (void)setJetsamMode:(char)a0;
- (id)transientLocalSettings;

@end
