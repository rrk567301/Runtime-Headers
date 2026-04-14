@class FBSceneWorkspace;
@protocol FBSceneManagerDelegate;

@interface FBSceneManager : NSObject {
    FBSceneWorkspace *_workspace;
    BOOL _invalidated;
}

@property (nonatomic, setter=_setSuppressConnectionHandshakes:) BOOL _suppressConnectionHandshakes;
@property (weak, nonatomic) id<FBSceneManagerDelegate> delegate;

+ (id)sharedInstance;
+ (id)keyboardScene;
+ (void)_clearKeyboardScene;
+ (void)synchronizeChanges:(id /* block */)a0;
+ (id)observeKeyboardSceneAvailability:(id /* block */)a0;
+ (void)setKeyboardScene:(id)a0;

- (id)debugDescription;
- (id)newSceneIdentityTokenForIdentity:(id)a0;
- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (id)scenesPassingTest:(id /* block */)a0;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (void)_invalidate;
- (id)createSceneWithDefinition:(id)a0;
- (void)remove:(id)a0;
- (void)add:(id)a0;
- (id)createSceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (BOOL)_isSameAsWorkspace:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)createSceneWithDefinition:(id)a0 initialParameters:(id)a1;
- (id)sceneFromIdentityToken:(id)a0;
- (id)init;
- (id)createScene:(id /* block */)a0;
- (void)destroyScene:(id)a0 withTransitionContext:(id)a1;
- (id)description;
- (void)removeObserver:(id)a0;
- (id)sceneWithIdentifier:(id)a0;
- (id)createSceneWithIdentifier:(id)a0 parameters:(id)a1 clientProvider:(id)a2 transitionContext:(id)a3;
- (id)createLegacySceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (id)_createSceneWithDefinition:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 transitionContext:(id)a3 fromRemnant:(id)a4 usingClientProvider:(id)a5 completion:(id /* block */)a6;
- (void)dealloc;
- (id)_initWithProcessManager:(id)a0;

@end
