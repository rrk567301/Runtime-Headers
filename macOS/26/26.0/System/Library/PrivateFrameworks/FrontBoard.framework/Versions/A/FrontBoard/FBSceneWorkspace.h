@class FBSMutableSceneParameters, NSString, FBProcessManager, NSMutableOrderedSet, FBSceneManagerObserver, NSMutableDictionary, FBSMutableSceneDefinition;
@protocol FBSceneWorkspaceDelegate, BSInvalidatable;

@interface FBSceneWorkspace : NSObject <FBSceneCreating_Internal, FBWorkspaceEventDispatcherTarget, FBSceneEventCoordinating, BSDescriptionProviding> {
    FBProcessManager *_processManager;
    id<BSInvalidatable> _eventDispatcherTargetRegistration;
    id<BSInvalidatable> _stateCaptureAssertion;
    FBSceneManagerObserver *_delegate;
    NSMutableOrderedSet *_lock_observers;
    NSMutableDictionary *_allScenesByID;
    unsigned long long _synchronizationBlockDepth;
    FBSMutableSceneDefinition *_buildingDefinition;
    FBSMutableSceneParameters *_buildingParameters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
    BOOL _suppressConnectionHandshakes;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<FBSceneWorkspaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier;

+ (id)debugDescription;
+ (id)sceneIdentityTokenForIdentifier:(id)a0 workspaceIdentifier:(id)a1;
+ (id)workspaceWithIdentifier:(id)a0;

- (id)sceneWithIdentifier:(id)a0;
- (void)setIdentity:(id)a0;
- (void)setSpecification:(id)a0;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)setClientIdentity:(id)a0;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_objc_initiateDealloc;
- (id)init;
- (id)succinctDescription;
- (id)createScene:(id /* block */)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)addObserver:(id)a0;
- (id)createSceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (void)setIdentifier:(id)a0;
- (id)delegate;
- (BOOL)scene:(id)a0 willUpdateSettings:(id)a1;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)createSceneWithDefinition:(id)a0;
- (void)configureParameters:(id /* block */)a0;
- (id)allScenes;
- (void)didAddScene:(id)a0;
- (void)didReceiveHandshake:(id)a0;
- (void)didReceiveSceneRequest:(id)a0 fromHandle:(id)a1;
- (void)scene:(id)a0 didApplyUpdate:(id)a1;
- (void)scene:(id)a0 didCompleteUpdate:(id)a1;
- (void)scene:(id)a0 didPrepareUpdate:(id)a1;
- (id)sceneIdentityTokenForIdentifier:(id)a0;
- (id)sceneWithIdentityToken:(id)a0;

@end
