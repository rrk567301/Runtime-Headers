@class NSString;
@protocol FBSceneComponent, FBSceneObserver, FBSceneDelegate;

@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneObserver, FBSceneDelegate, FBSceneComponent> {
    unsigned long long _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    struct { BOOL contentStateDidChange; BOOL updatePrepared; BOOL updateApplied; BOOL updateCompleted; BOOL clientSettingsUpdated; BOOL didActivate; BOOL willDeactivateWithError; BOOL didInvalidate; BOOL clientDidConnect; BOOL handleActions; } _observerFlags;
    struct { BOOL willUpdateScene; BOOL didReceiveActions; BOOL didDeactivateWithError; } _delegateFlags;
    struct { BOOL willUpdateSettings; } _componentFlags;
}

@property (readonly, weak, nonatomic) id<FBSceneObserver> observer;
@property (readonly, weak, nonatomic) id<FBSceneDelegate> delegate;
@property (readonly, nonatomic) id<FBSceneComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithComponent:(id)a0;
- (id)_initWithObserver:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)initWithObserver:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithScene:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (id)scene:(id)a0 handleActions:(id)a1;
- (BOOL)isDelegate;
- (void)configureInitialSettings:(id)a0;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)scene:(id)a0 didPrepareUpdateWithContext:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)scene:(id)a0 willUpdateSettings:(id)a1 withTransitionContext:(id)a2;
- (void)sceneContentStateDidChange:(id)a0;
- (void)sceneDidActivate:(id)a0;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)sceneDidInvalidate:(id)a0;
- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (BOOL)delegateReceivesActions;
- (BOOL)observerHandlesActions;

@end
