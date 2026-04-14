@class NSHashTable, NSString, BSServiceConnectionEndpoint, FBSWorkspace, BSServiceQuality, BSServiceConnection, NSMutableDictionary, FBSSerialQueue, NSObject, NSMutableArray;
@protocol FBSWorkspaceDelegate, BSServiceConnectionClient, FBSWorkspaceServiceClientInterface, NSCopying, OS_dispatch_queue;

@interface FBSWorkspaceScenesClient : NSObject <FBSSceneUpdater, FBSWorkspaceScenesSource> {
    FBSWorkspace *_workspace;
    id<FBSWorkspaceDelegate> _workspaceDelegate;
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    BSServiceConnection<BSServiceConnectionClient> *_connection;
    BSServiceConnectionEndpoint *_endpoint;
    NSMutableDictionary *_scenesByIdentity;
    NSMutableDictionary *_clientSettingsByIdentity;
    NSHashTable *_reconnectingScenes;
    NSMutableArray *_pendedSendBlocks;
    id<FBSWorkspaceServiceClientInterface> _handshakeLock_remoteTarget;
    NSMutableDictionary *_reportingLock_scenesByIdentity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handshakeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reportingLock;
    BOOL _activated;
}

@property (class, readonly, nonatomic) BSServiceQuality *serviceQuality;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)hostProcess;
- (id)callOutQueue;
- (void)scene:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (oneway void)sceneID:(id)a0 sendMessage:(id)a1 completion:(id /* block */)a2;
- (void)_configureReceivedActions:(id)a0 forScene:(id)a1;
- (id)_queue_connectedSceneWithIdentity:(id)a0;
- (void)_queue_invalidateScene:(id)a0 withTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)_queue_sendHandshake;
- (void)_queue_updateScene:(id)a0 withSettings:(id)a1 diff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (id)_remoteTarget;
- (id)_reportedSceneWithIdentity:(id)a0;
- (BOOL)canHaveAgent;
- (oneway void)createSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)initWithEndpoint:(id)a0 queue:(id)a1 calloutQueue:(id)a2 workspace:(id)a3;
- (void)queue_activate;
- (oneway void)reconnectSceneWithIdentity:(id)a0 parameters:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (void)requestSceneWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (oneway void)sceneID:(id)a0 destroyWithTransitionContext:(id)a1 completion:(id /* block */)a2;
- (oneway void)sceneID:(id)a0 sendActions:(id)a1;
- (oneway void)sceneID:(id)a0 updateWithSettingsDiff:(id)a1 transitionContext:(id)a2 completion:(id /* block */)a3;
- (id)sceneWithIdentity:(id)a0;
- (id)scenes;
- (oneway void)sendActions:(id)a0 completion:(id /* block */)a1;
- (oneway void)willTerminateWithTransitionContext:(id)a0;

@end
