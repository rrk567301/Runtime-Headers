@class NSString, FBSSceneSettings, BSAuditToken, FBSSceneIdentity, FBSSceneIdentityToken, FBSSceneSpecification, FBSSerialQueue, FBSSceneDefinition, NSMutableArray, FBSSceneClientSettings, NSOrderedSet;
@protocol FBSSceneDelegate, FBSSceneUpdater, FBSSceneClientAgent;

@interface FBSScene : NSObject <FBSSceneSnapshotRequestDelegate, FBSSceneHandle, FBSSceneAgentProxy, FBSSceneUpdaterDelegate, BSDescriptionProviding> {
    FBSSerialQueue *_callOutQueue;
    FBSSceneDefinition *_definition;
    BOOL _hasAgent;
    id<FBSSceneClientAgent> _callOutQueue_agent;
    NSMutableArray *_callOutQueue_agentSessions;
    id /* block */ _callOutQueue_agentMessageHandler;
    BOOL _callOutQueue_agentInvalidateCalled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<FBSSceneUpdater> _lock_updater;
    FBSSceneSettings *_lock_settings;
    FBSSceneClientSettings *_lock_clientSettings;
    NSOrderedSet *_lock_layers;
    id<FBSSceneDelegate> _lock_delegate;
    FBSSceneIdentityToken *_identityToken;
}

@property (readonly, copy, nonatomic) FBSSceneIdentity *identity;
@property (readonly, nonatomic) BSAuditToken *hostAuditToken;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FBSSceneIdentityToken *identityToken;
@property (readonly, nonatomic) FBSSceneSpecification *specification;
@property (weak, nonatomic) id<FBSSceneDelegate> delegate;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneClientSettings *clientSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canHaveAgent;

- (id)init;
- (void).cxx_destruct;
- (id)parameters;
- (id)display;
- (id)layers;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)definition;
- (id)hostProcess;
- (id)contexts;
- (id)callOutQueue;
- (id)clientProcess;
- (BOOL)performSnapshotWithContext:(id)a0;
- (BOOL)snapshotRequestAllowSnapshot:(id)a0;
- (BOOL)snapshotRequest:(id)a0 performWithContext:(id)a1;
- (id)openSessionWithName:(id)a0 executionPolicy:(id)a1;
- (void)closeSession:(id)a0;
- (id)counterpartAgent;
- (void)agent:(id)a0 registerMessageHandler:(id /* block */)a1;
- (void)agent:(id)a0 sendMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)updater:(id)a0 didUpdateSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3 completion:(id /* block */)a4;
- (void)updater:(id)a0 didReceiveActions:(id)a1;
- (void)updater:(id)a0 didReceiveMessage:(id)a1 withResponse:(id /* block */)a2;
- (void)updateClientSettings:(id)a0 withTransitionContext:(id)a1;
- (void)updateClientSettingsWithBlock:(id /* block */)a0;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)a0;
- (void)sendActions:(id)a0;
- (void)attachLayer:(id)a0;
- (void)detachLayer:(id)a0;
- (void)attachContext:(id)a0;
- (void)detachContext:(id)a0;
- (void)attachSceneContext:(id)a0;
- (void)detachSceneContext:(id)a0;
- (id)snapshotRequest;
- (BOOL)invalidateSnapshotWithContext:(id)a0;
- (id)fbsDisplay;
- (void)_calloutQueue_comsumeLock_updateClientSettings:(id)a0 withTransitionContext:(id)a1;
- (void)_callOutQueue_invalidateAgent;
- (id)_initWithUpdater:(id)a0 identityToken:(id)a1 identity:(id)a2 specification:(id)a3 settings:(id)a4 initialClientSettings:(id)a5;
- (void)_callOutQueue_invalidate;
- (BOOL)_hasAgent;
- (void)_callOutQueue_agent_didCreateWithTransitionContext:(id)a0 completion:(id /* block */)a1;
- (void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)a0 completion:(id /* block */)a1;

@end
