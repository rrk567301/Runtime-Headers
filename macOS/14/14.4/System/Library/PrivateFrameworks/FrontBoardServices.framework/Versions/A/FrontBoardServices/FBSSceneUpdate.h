@class FBSSettingsDiff, FBSSceneTransitionContext, FBSSettings;

@interface FBSSceneUpdate : NSObject {
    FBSSettings *_settings;
    FBSSettings *_previousSettings;
    FBSSettingsDiff *_diff;
    FBSSceneTransitionContext *_context;
}

- (void).cxx_destruct;
- (id)settings;
- (void)inspect:(id /* block */)a0;
- (id)previousSettings;
- (id)settingsDiff;
- (id)transitionContext;

@end
