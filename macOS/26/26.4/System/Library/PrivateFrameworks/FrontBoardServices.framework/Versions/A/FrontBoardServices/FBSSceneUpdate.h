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

- (id)settings;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)settingsDiff;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)transitionContext;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)mutableSettings;
- (void)inspect:(id /* block */)a0;
- (id)parentUpdate;
- (id)previousSettings;

@end
