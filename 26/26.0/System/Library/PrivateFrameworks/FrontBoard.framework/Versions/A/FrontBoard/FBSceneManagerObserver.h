@class NSString;
@protocol FBSceneManagerObserver;

@interface FBSceneManagerObserver : NSObject <BSDescriptionProviding, FBSceneWorkspaceDelegate_Internal, FBSceneManagerObserver, FBSceneManagerDelegate_Private> {
    unsigned long long _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    BOOL _privateDelegate;
    BOOL _didDestroyDEPRECATED;
    BOOL _willUpdateSceneDEPRECATED;
    BOOL _willCommitDEPRECATED;
    BOOL _didCommitDEPRECATED;
    BOOL _didAddLEGACY;
    BOOL _willRemoveLEGACY;
    BOOL _interceptSceneUpdatesLEGACY;
    BOOL _clientDidConnectLEGACY;
    BOOL _didReceiveSceneRequestLEGACY;
    BOOL _didAdd;
    BOOL _willRemove;
    BOOL _clientDidConnect;
    BOOL _didReceiveSceneRequest;
    BOOL _didReceiveScene;
    BOOL _didReceiveActions;
}

@property (readonly, weak, nonatomic) id<FBSceneManagerObserver> observer;
@property (readonly, weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)workspace:(id)a0 willRemoveScene:(id)a1;
- (void)sceneManager:(id)a0 interceptUpdateForScene:(id)a1 withNewSettings:(id)a2;
- (void)sceneManager:(id)a0 didAddScene:(id)a1;
- (void)sceneManager:(id)a0 didCommitUpdateForScene:(id)a1 transactionID:(unsigned long long)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithDelegate:(id)a0 workspace:(id)a1;
- (id)_initWithObserver:(id)a0 workspace:(id)a1;
- (void)sceneManager:(id)a0 willCommitUpdateForScene:(id)a1 transactionID:(unsigned long long)a2;
- (void)workspace:(id)a0 clientDidConnectWithHandshake:(id)a1;
- (id)succinctDescription;
- (BOOL)delegateHandlesLegacyInterception;
- (void)workspace:(id)a0 didReceiveSceneRequestWithOptions:(id)a1 fromProcess:(id)a2 completion:(id /* block */)a3;
- (BOOL)isDelegate;
- (BOOL)delegateHandlesClientScenes;
- (void)sceneManager:(id)a0 willRemoveScene:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)sceneManager:(id)a0 willUpdateScene:(id)a1 withSettings:(id)a2 transitionContext:(id)a3;
- (void)workspace:(id)a0 didAddScene:(id)a1;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)workspace:(id)a0 didReceiveActions:(id)a1;
- (id)initWithObserver:(id)a0 workspace:(id)a1;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (id)_privateDelegate;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)workspace:(id)a0 didReceiveScene:(id)a1 withContext:(id)a2 fromProcess:(id)a3;
- (void).cxx_destruct;
- (BOOL)delegateReceivesActions;
- (void)sceneManager:(id)a0 clientDidConnectWithHandshake:(id)a1;

@end
