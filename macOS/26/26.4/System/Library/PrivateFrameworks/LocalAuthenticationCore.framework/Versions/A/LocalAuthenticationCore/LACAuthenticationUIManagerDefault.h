@class NSDictionary, NSArray, NSSet;
@protocol LACRemoteUI, LACAuthenticationUINotifying, LACRemoteUIManaging, LACEvaluationRequest;

@interface LACAuthenticationUIManagerDefault : NSObject <LACAuthenticationUIManaging, LACEvaluationEventHandling, LACRemoteUIHost, LACUIMechanism> {
    void /* function */ authenticationHints;
    void /* function */ anonymousListeners;
    void /* function */ activeMechanisms;
}

@property (nonatomic, readonly) unsigned int instanceId;
@property (nonatomic, readonly) BOOL isRunning;
@property (nonatomic, readonly) id<LACEvaluationRequest> request;
@property (nonatomic, readonly) long long type;
@property (nonatomic, copy) NSDictionary *authenticationHints;
@property (nonatomic, weak) void /* function */ uiEventDelegate;
@property (nonatomic, copy) NSArray *anonymousListeners;
@property (nonatomic, copy) NSSet *activeMechanisms;
@property (nonatomic) BOOL isActive;
@property (nonatomic, retain) id<LACAuthenticationUINotifying> notificationCenter;
@property (nonatomic) long long presentedController;
@property (nonatomic, retain) id<LACRemoteUI> remoteUI;
@property (nonatomic, readonly) id<LACRemoteUIManaging> remoteUIManager;
@property (nonatomic) BOOL uiDisappeared;
@property (nonatomic) BOOL ignoreUIDisappearance;
@property (nonatomic) BOOL uiTransitioning;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)checkHasPendingUIRequestsForRemoteUI:(id)a0 completion:(id /* block */)a1;
- (void)connectRemoteUI:(id)a0 requestID:(id)a1 reply:(id /* block */)a2;
- (void)disconnectRemoteUI;
- (void)failAuthenticationWithError:(id)a0;
- (void)internalInfoWithReply:(id /* block */)a0;
- (void)uiEvent:(long long)a0 options:(id)a1;
- (void)uiFailureWithError:(id)a0;
- (void)uiSuccessWithResult:(id)a0;
- (void)handleEvaluationEvent:(id)a0 completion:(id /* block */)a1;
- (id)initWithRequest:(id)a0 remoteUIManager:(id)a1;

@end
