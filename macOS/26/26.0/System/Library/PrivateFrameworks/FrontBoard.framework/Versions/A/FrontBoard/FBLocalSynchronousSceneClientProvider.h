@class NSString, FBSWorkspace, FBSWorkspaceCoupler, NSMutableDictionary, FBWorkspaceEventDispatcher, NSMutableSet, NSMutableArray, NSObject;
@protocol FBSProcess, NSCopying;

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSSceneUpdater, FBSceneClient, FBSWorkspaceServiceTarget, FBSceneClientProvider> {
    NSMutableArray *_pendingSceneCreatesBeforeFBSWorkspaceInitialization;
    NSMutableDictionary *_localSceneInfoByIdentity;
    NSMutableDictionary *_hostsByIdentity;
    NSMutableSet *_pendingScenes;
    id<FBSProcess> _currentProcess;
    FBSWorkspaceCoupler *_coupler;
    FBSWorkspace *_callOutQueue_workspace;
    FBWorkspaceEventDispatcher *_eventDispatcher;
    NSMutableSet *_clientFutureHostsBeingSynchronized;
    NSMutableSet *_clientFutureScenesBeingSynchronized;
    BOOL _invalidated;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)host:(id)a0 didInvalidateWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (id)callOutQueue;
- (void)host:(id)a0 sendInvocation:(id)a1 withReply:(id /* block */)a2;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)unregisterHost:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (id)registerHost:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 fromRemnant:(id)a3 error:(out id *)a4;
- (void)sendActions:(id)a0 toWorkspaceID:(id)a1 completion:(id /* block */)a2;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)scene:(id)a0 sendInvocation:(id)a1;
- (void)host:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (id)scenes;
- (void)host:(id)a0 didReceiveActions:(id)a1 forExtension:(Class)a2;
- (void)sendBatchedMessages;
- (void)activateSceneFuture:(id)a0 completion:(id /* block */)a1;
- (BOOL)canHaveAgent;
- (id)hostProcess;
- (id)fbsSceneForScene:(id)a0;
- (void)dealloc;
- (id)fbsSceneWithIdentifier:(id)a0;
- (id)sceneWithIdentity:(id)a0;
- (id)init;
- (void)scene:(id)a0 didReceiveActions:(id)a1 forExtension:(Class)a2;
- (void)scene:(id)a0 invalidateWithTransitionContext:(id)a1;
- (id)createSceneFutureWithDefinition:(id)a0;
- (void).cxx_destruct;

@end
