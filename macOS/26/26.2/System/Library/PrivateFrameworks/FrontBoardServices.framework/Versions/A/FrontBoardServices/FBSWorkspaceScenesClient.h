@class NSHashTable, NSString, FBSSceneHostHandle, FBSWorkspace, BSServiceQueue, BSServiceConnection, NSMutableDictionary, NSObject, FBSWorkspaceScenesClientIdentifier, NSMutableArray, BSServiceDispatchQueue;
@protocol FBSWorkspaceDelegate, FBSWorkspaceServiceClientInterface, NSCopying;

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceServiceTarget, FBSWorkspaceServiceServerInterface> {
    FBSWorkspace *_workspace;
    id<FBSWorkspaceDelegate> _workspaceDelegate;
    BSServiceDispatchQueue *_queue;
    BSServiceQueue *_callOutQueue;
    BSServiceConnection *_connection;
    FBSWorkspaceScenesClientIdentifier *_identifier;
    NSMutableDictionary *_scenesByIdentity;
    NSMutableDictionary *_clientSettingsByIdentity;
    NSHashTable *_reconnectingScenes;
    NSMutableArray *_pendedSendBlocks;
    NSMutableArray *_hostEvent_pendingEvents;
    FBSSceneHostHandle *_hostHandle;
    id<FBSWorkspaceServiceClientInterface> _handshakeLock_remoteTarget;
    NSMutableDictionary *_reportingLock_scenesByIdentity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handshakeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reportingLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hostEventLock;
    BOOL _activated;
    BOOL _invalidated;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (id)sceneWithIdentity:(id)a0;
- (id)callOutQueue;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (id)createSceneFutureWithDefinition:(id)a0;
- (void)scene:(id)a0 invalidateWithTransitionContext:(id)a1;
- (BOOL)canHaveAgent;
- (void)sendActions:(id)a0 toWorkspaceID:(id)a1 completion:(id /* block */)a2;
- (oneway void)sceneID:(id)a0 updateWithSettingsDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)scene:(id)a0 didReceiveActions:(id)a1 forExtension:(Class)a2;
- (oneway void)sendActions:(id)a0 completion:(id /* block */)a1;
- (oneway void)sceneID:(id)a0 sendActions:(id)a1 toExtension:(id)a2 completion:(id /* block */)a3;
- (oneway void)sceneID:(id)a0 handleInvocation:(id)a1 completion:(id /* block */)a2;
- (oneway void)reconnectSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (oneway void)createSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (oneway void)willTerminateWithTransitionContext:(id)a0;
- (oneway void)sceneID:(id)a0 sendMessage:(id)a1 completion:(id /* block */)a2;
- (oneway void)sceneID:(id)a0 destroyWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)activateSceneFuture:(id)a0 completion:(id /* block */)a1;
- (id)hostProcess;
- (void)sendBatchedMessages;
- (void)scene:(id)a0 sendInvocation:(id)a1;
- (id)init;
- (id)scenes;

@end
