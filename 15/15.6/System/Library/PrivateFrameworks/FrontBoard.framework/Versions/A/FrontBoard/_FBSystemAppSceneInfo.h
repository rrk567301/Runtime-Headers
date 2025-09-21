@class FBSScene, FBSSceneTransitionContext;

@interface _FBSystemAppSceneInfo : NSObject

@property (retain, nonatomic) FBSScene *FBSScene;
@property (nonatomic) char hasHandledSceneCreate;
@property (nonatomic) char hasSentFBSWorkspaceDelegateSceneCreate;
@property (retain, nonatomic) FBSSceneTransitionContext *pendingTransitionContext;

- (void).cxx_destruct;

@end
