@class NSString;
@protocol FBSceneObserver, FBSceneComponent;

@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneComponent_Internal, FBSceneObserver_Internal, FBSceneDelegate, FBSceneComponent> {
    id<FBSceneObserver> _observer;
    unsigned long long _observerAddress;
    Class _observerClass;
    char _isDelegate;
    struct { char contentStateDidChange; char didUpdateSettings; char updatePreparedLEGACY; char updateAppliedLEGACY; char updateCompletedLEGACY; char didUpdateClientSettings; char clientSettingsUpdatedLEGACY; char willActivate; char didActivate; char willDeactivateWithError; char willDeactivateWithContext; char didInvalidate; char didInvalidateWithContext; char clientDidConnect; char handleActions; } _observerFlags;
    struct { char willUpdateSettingsLEGACY; char willUpdateSettings; char didReceiveActions; char didDeactivateWithError; char didDeactivateWithContext; } _delegateFlags;
    struct { char willUpdateSettingsLEGACY; char willUpdateSettings; char handlePrivateActions; } _componentFlags;
    id<FBSceneComponent> _component;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_initWithObserver:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithScene:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (id)scene:(id)a0 handleActions:(id)a1;
- (id)scene:(id)a0 handlePrivateActions:(id)a1;
- (void)sceneDidInvalidate:(id)a0 withContext:(id)a1;
- (void)sceneDidDeactivate:(id)a0 withContext:(id)a1;
- (void)configureInitialSettings:(id)a0;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)scene:(id)a0 didPrepareUpdateWithContext:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)scene:(id)a0 willUpdateSettings:(id)a1;
- (void)scene:(id)a0 willUpdateSettings:(id)a1 withTransitionContext:(id)a2;
- (void)sceneContentStateDidChange:(id)a0;
- (void)sceneDidActivate:(id)a0;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)sceneDidInvalidate:(id)a0;
- (void)sceneWillActivate:(id)a0;
- (void)sceneWillDeactivate:(id)a0 withContext:(id)a1;
- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (void)componentWillInvalidate:(id)a0;

@end
