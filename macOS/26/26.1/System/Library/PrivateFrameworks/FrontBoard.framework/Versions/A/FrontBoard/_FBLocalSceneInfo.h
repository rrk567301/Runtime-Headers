@class FBSScene, FBSSceneTransitionContext;

@interface _FBLocalSceneInfo : NSObject {
    BOOL hasHandledSceneCreate;
    BOOL hasSentFBSWorkspaceDelegateSceneCreate;
    FBSScene *_scene;
    FBSSceneTransitionContext *pendingTransitionContext;
}

- (void).cxx_destruct;
- (id)init;

@end
