@class FBSSettingsDiff, NSString, FBSSceneTransitionContext, FBSSettings;
@protocol FBSMutableSettings;

@interface FBSSceneUpdate : NSObject <BSDescriptionProviding, NSMutableCopying, NSCopying> {
    FBSSettings *_settings;
    FBSSettings<FBSMutableSettings> *_mutableSettings;
    FBSSettings *_previousSettings;
    FBSSettingsDiff *_diff;
    FBSSceneTransitionContext *_context;
    FBSSceneUpdate *_instigatingUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)inspect:(id /* block */)a0;
- (id)settings;
- (id)succinctDescription;
- (id)settingsDiff;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)transitionContext;
- (id)mutableSettings;
- (id)parentUpdate;
- (id)previousSettings;

@end
