@class NSString;
@protocol FBSceneObserver, FBSceneComponent;

@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneComponent_Internal, FBSceneObserver_Internal, FBSceneDelegate, FBSceneComponent, BSInvalidatable> {
    id<FBSceneObserver> _observer;
    unsigned long long _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    struct { BOOL contentStateDidChange; BOOL didUpdateSettings; BOOL updatePreparedLEGACY; BOOL updateAppliedLEGACY; BOOL updateCompletedLEGACY; BOOL didUpdateClientSettings; BOOL clientSettingsUpdatedLEGACY; BOOL willActivate; BOOL didActivate; BOOL willDeactivateWithError; BOOL willDeactivateWithContext; BOOL didInvalidate; BOOL didInvalidateWithContext; BOOL clientDidConnect; BOOL handleActions; BOOL wantsInactiveUpdates; } _observerFlags;
    struct { BOOL willUpdateSettingsLEGACY; BOOL willUpdateSettings; BOOL didReceiveActions; BOOL didDeactivateWithError; BOOL didDeactivateWithContext; } _delegateFlags;
    struct { BOOL willUpdateSettingsLEGACY; BOOL willUpdateSettings; BOOL handlePrivateActions; } _componentFlags;
    id<FBSceneComponent> _component;
    Class _extension;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (void)sceneDidDeactivate:(id)a0 withContext:(id)a1;
- (void)sceneWillActivate:(id)a0;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)invalidate;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)configureInitialSettings:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (void)sceneDidActivate:(id)a0;
- (id)_initWithObserver:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)scene:(id)a0 didPrepareUpdateWithContext:(id)a1;
- (void)sceneWillDeactivate:(id)a0 withContext:(id)a1;
- (id)succinctDescription;
- (void)sceneDidInvalidate:(id)a0 withContext:(id)a1;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)sceneObserverWantsUpdatesFromInactiveScenes;
- (void)sceneContentStateDidChange:(id)a0;
- (void)componentWillInvalidate:(id)a0;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)scene:(id)a0 willUpdateSettings:(id)a1 withTransitionContext:(id)a2;
- (id)scene:(id)a0 handlePrivateActions:(id)a1;
- (void)scene:(id)a0 willUpdateSettings:(id)a1;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)scene:(id)a0 handleActions:(id)a1;

@end
