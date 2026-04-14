@class FBSWorkspace, FBSSerialQueue;
@protocol NSApplicationSceneHandler;

@interface NSApplicationSceneWorkspace : NSObject <FBSWorkspaceDelegate> {
    void /* unknown type, empty encoding */ sceneHandlers;
    void /* unknown type, empty encoding */ underlyingWorkspace;
}

@property (nonatomic, readonly) FBSWorkspace *workspace;
@property (nonatomic, retain) id<NSApplicationSceneHandler> appkitHandler;
@property (nonatomic, retain) id<NSApplicationSceneHandler> uikitHandler;
@property (nonatomic, retain) FBSSerialQueue *callOutQueue;

+ (id)shared;

- (id)init;
- (void)workspace:(id)a0 didReceiveActions:(id)a1;
- (void).cxx_destruct;
- (void)workspace:(id)a0 didCreateScene:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;
- (void)workspace:(id)a0 willDestroyScene:(id)a1 withTransitionContext:(id)a2 completion:(id /* block */)a3;

@end
