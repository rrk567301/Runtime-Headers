@class NSString, BSServiceQueue, NSObject;
@protocol NSCopying;

@interface FBSPseudoSceneUpdater : NSObject <FBSSceneUpdater> {
    BSServiceQueue *_callOutQueue;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scenes;
- (void)scene:(id)a0 sendInvocation:(id)a1;
- (id)hostProcess;
- (id)callOutQueue;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)activateSceneFuture:(id)a0 completion:(id /* block */)a1;
- (void)scene:(id)a0 invalidateWithTransitionContext:(id)a1;
- (void)sendBatchedMessages;
- (void).cxx_destruct;
- (BOOL)canHaveAgent;
- (id)createSceneFutureWithDefinition:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1 forExtension:(Class)a2;
- (id)sceneWithIdentity:(id)a0;
- (void)sendActions:(id)a0 toWorkspaceID:(id)a1 completion:(id /* block */)a2;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (id)_initWithCallOutQueue:(id)a0;

@end
