@class FBSceneWorkspace;
@protocol FBSceneManagerDelegate;

@interface FBSceneManager : NSObject {
    FBSceneWorkspace *_workspace;
    BOOL _invalidated;
}

@property (nonatomic, setter=_setSuppressConnectionHandshakes:) BOOL _suppressConnectionHandshakes;
@property (weak, nonatomic) id<FBSceneManagerDelegate> delegate;

+ (id)sharedInstance;
+ (void)setKeyboardScene:(id)a0;
+ (id)observeKeyboardSceneAvailability:(id /* block */)a0;
+ (void)_clearKeyboardScene;
+ (void)synchronizeChanges:(id /* block */)a0;
+ (id)keyboardScene;

- (void)add:(id)a0;
- (void)_invalidate;
- (id)createScene:(id /* block */)a0;
- (id)createSceneWithDefinition:(id)a0;
- (void)remove:(id)a0;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (id)sceneWithIdentifier:(id)a0;
- (BOOL)_isSameAsWorkspace:(id)a0;
- (id)createLegacySceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (id)description;
- (void)dealloc;
- (id)sceneFromIdentityToken:(id)a0;
- (id)createSceneWithDefinition:(id)a0 initialParameters:(id)a1;
- (id)createSceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)destroyScene:(id)a0 withTransitionContext:(id)a1;
- (void)removeObserver:(id)a0;
- (id)_createSceneWithDefinition:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 transitionContext:(id)a3 fromRemnant:(id)a4 usingClientProvider:(id)a5 completion:(id /* block */)a6;
- (id)scenesPassingTest:(id /* block */)a0;
- (id)createSceneWithIdentifier:(id)a0 parameters:(id)a1 clientProvider:(id)a2 transitionContext:(id)a3;
- (id)newSceneIdentityTokenForIdentity:(id)a0;
- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (id)_initWithProcessManager:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;

@end
