@class FBSSettingsDiff, FBSSceneTransitionContext, FBSSettings;
@protocol FBSMutableSettings;

@interface FBSMutableSceneUpdate : FBSSceneUpdate

@property (copy, nonatomic) FBSSettings<FBSMutableSettings> *settings;
@property (copy, nonatomic) FBSSettings<FBSMutableSettings> *previousSettings;
@property (copy, nonatomic) FBSSettingsDiff *settingsDiff;
@property (copy, nonatomic) FBSSceneTransitionContext *transitionContext;

- (void)setSettings:(id)a0;
- (void)setSettingsDiff:(id)a0;
- (void)setTransitionContext:(id)a0;
- (void)setPreviousSettings:(id)a0;

@end
