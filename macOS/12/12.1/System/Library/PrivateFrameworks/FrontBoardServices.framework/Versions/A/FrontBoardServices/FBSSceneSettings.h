@class FBSDisplayIdentity, NSString, NSSet, FBSDisplayConfiguration, BSSettings;

@interface FBSSceneSettings : NSObject <BSDebugDescriptionProviding, NSCopying, NSMutableCopying> {
    BSSettings *_otherSettings;
    BSSettings *_transientLocalSettings;
    BOOL _prefersProcessTaskSuspensionWhileSceneForeground;
    char _activityMode;
    char _jetsamMode;
    long long _isOccluded;
    BOOL _occluded;
    NSSet *_ignoreOcclusionReasons;
}

@property (readonly, copy, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (readonly, nonatomic) long long interruptionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settings;
+ (BOOL)_isMutable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)initWithSettings:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (BOOL)settings:(id)a0 appendDescriptionToBuilder:(id)a1 forFlag:(long long)a2 object:(id)a3 ofSetting:(unsigned long long)a4;
- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (BOOL)appendDescriptionToBuilder:(id)a0 forFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)otherSettings;
- (id)transientLocalSettings;
- (id)ignoreOcclusionReasons;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 debug:(BOOL)a1;
- (id)occlusions;
- (BOOL)isOccluded;
- (char)activityMode;
- (char)jetsamMode;
- (BOOL)isIgnoringOcclusions;
- (BOOL)prefersProcessTaskSuspensionWhileSceneForeground;
- (void)setPrefersProcessTaskSuspensionWhileSceneForeground:(BOOL)a0;

@end
