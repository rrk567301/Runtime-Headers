@class NSMutableSet;

@interface IMSceneStateManager : NSObject

@property (class, readonly, nonatomic) IMSceneStateManager *sharedManager;

@property (retain, nonatomic) NSMutableSet *foregroundSceneUUIDs;
@property (readonly, nonatomic) BOOL inForeground;

- (void).cxx_destruct;
- (id)init;
- (void)sceneTransitionedActiveState:(long long)a0 forSceneUUID:(id)a1;

@end
