@class LACClientInfo, NSDate, NSDictionary, PreflightCacheBypassAssertion, MechanismBase, NSNumber;
@protocol LACContextUIDelegate, LACXPCClient, LACEvaluationRequest;

@interface AuthenticationInProgress : NSObject {
    id<LACContextUIDelegate> _uiDelegate;
    id<LACEvaluationRequest> _request;
    NSDictionary *_internalOptions;
    id /* block */ _reply;
    NSDate *_started;
    PreflightCacheBypassAssertion *_preflightCacheBypassAssertion;
}

@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) MechanismBase *mechanism;
@property (readonly, nonatomic) long long originatorId;
@property (readonly, nonatomic) NSNumber *ahpMode;
@property (readonly, nonatomic) AuthenticationInProgress *enqueuedAuthentication;
@property (readonly, nonatomic) LACClientInfo *clientInfo;
@property (readonly, nonatomic) id<LACXPCClient> originator;
@property (readonly, nonatomic, getter=isBiometric) BOOL biometric;
@property (readonly, nonatomic) id<LACEvaluationRequest> evaluationRequest;

- (void).cxx_destruct;
- (id)description;
- (void)cancelWithError:(id)a0;
- (void)runWithCompletionHandler:(id /* block */)a0;
- (void)_bypassPreflightCache:(BOOL)a0;
- (BOOL)_isInteractiveEvaluationWithinProtectedAppsEvaluation:(id)a0;
- (void)enqueueAuthentication:(id)a0;
- (id)initWithMechanism:(id)a0 uiDelegate:(id)a1 request:(id)a2 reply:(id /* block */)a3;
- (id)shouldDequeueAndRunAfterAuthentication:(id)a0 result:(id)a1 error:(id)a2;
- (BOOL)shouldEnqueueAuthentication:(id)a0;

@end
