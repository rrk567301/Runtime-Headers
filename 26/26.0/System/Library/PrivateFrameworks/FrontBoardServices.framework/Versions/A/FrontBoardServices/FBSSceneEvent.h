@class FBSSceneSettingsDiff, FBSSceneTransitionContext, FBSSceneClientSettingsDiff, NSSet;

@interface FBSSceneEvent : FBSSceneMessage

@property (nonatomic) long long source;
@property (retain, nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (retain, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (readonly, nonatomic) NSSet *actions;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)init;
- (id)succinctDescription;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;

@end
