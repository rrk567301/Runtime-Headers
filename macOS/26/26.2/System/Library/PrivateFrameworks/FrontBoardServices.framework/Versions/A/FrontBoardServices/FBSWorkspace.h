@class BSServiceConnectionEndpointMonitor, NSString, NSArray, BSServiceConnectionEndpoint, BSServiceQueue, FBSPseudoSceneUpdater, NSMutableDictionary, BSServiceCompoundQueue, BSServiceDispatchQueue;
@protocol FBSWorkspaceDelegate;

@interface FBSWorkspace : NSObject <BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding> {
    BSServiceDispatchQueue *_queue;
    BSServiceQueue *_callOutQueue;
    BSServiceCompoundQueue *_serviceQueue;
    FBSPseudoSceneUpdater *_psuedoSceneUpdater;
    id<FBSWorkspaceDelegate> _delegate;
    NSMutableDictionary *_queue_identifierToScenesSource;
    BSServiceConnectionEndpointMonitor *_connectionEndpointMonitor;
    BOOL _isSingleton;
    BOOL _queue_invalidated;
}

@property (readonly, nonatomic) BSServiceDispatchQueue *machQueue;
@property (readonly, nonatomic) BSServiceQueue *callOutQueue;
@property (readonly, nonatomic) id<FBSWorkspaceDelegate> delegate;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *defaultShellEndpoint;
@property (readonly, copy, nonatomic) NSArray *scenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_findDomainSpecification;
+ (void)startViewServiceDomain;

- (id)sceneWithIdentifier:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_queue_unregisterSource:(id)a0;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (id)serviceQueue;
- (void)requestSceneCreationWithIdentifier:(id)a0 initialClientSettings:(id)a1 completion:(id /* block */)a2;
- (void)_registerSourcePeer:(id)a0;
- (id)_initWithCoupler:(id)a0 options:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)_queue_registerSource:(id)a0;
- (id)defaultServiceForEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)requestDestructionOfScene:(id)a0 withCompletion:(id /* block */)a1;
- (id)_callOutQueue;
- (id)serviceForEndpoint:(id)a0 withIdentifier:(id)a1;
- (void)_registerSource:(id)a0;
- (void)_invalidateWithCompletion:(id /* block */)a0;
- (void)requestSceneFromEndpoint:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (id)defaultService;
- (void)monitor:(id)a0 willLoseEndpoint:(id)a1;
- (id)pseudoSceneWithIdentifier:(id)a0 specification:(id)a1;
- (id)succinctDescription;
- (void)_calloutQueue_executeCalloutFromSource:(id)a0 withBlock:(id /* block */)a1;
- (id)init;
- (void)setDelegate:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)requestSceneCreationWithInitialClientSettings:(id)a0 completion:(id /* block */)a1;
- (id)initWithSerialQueue:(id)a0;
- (void)_registerSourceEndpoint:(id)a0;
- (void)dealloc;
- (void)monitor:(id)a0 didReceiveEndpoint:(id)a1;

@end
