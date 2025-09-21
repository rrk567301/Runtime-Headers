@class FBSScene, BSServiceQueue;

@interface FBSSceneAction : BSAction

@property (retain, nonatomic) FBSScene *scene;
@property (retain, nonatomic) BSServiceQueue *callOutQueue;

- (void).cxx_destruct;

@end
