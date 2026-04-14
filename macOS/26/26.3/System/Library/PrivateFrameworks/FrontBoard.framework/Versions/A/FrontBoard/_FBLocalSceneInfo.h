@class FBSScene, FBSSceneTransitionContext;

@interface _FBLocalSceneInfo : NSObject {
    BOOL hasHandledSceneCreate;
    BOOL hasSentFBSWorkspaceDelegateSceneCreate;
    FBSScene *_scene;
    FBSSceneTransitionContext *pendingTransitionContext;
}

- (id)init;
- (void).cxx_destruct;

@end
