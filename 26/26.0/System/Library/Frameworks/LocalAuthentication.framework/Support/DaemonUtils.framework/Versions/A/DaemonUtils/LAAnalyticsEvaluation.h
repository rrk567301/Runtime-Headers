@class EvaluationRequest;

@interface LAAnalyticsEvaluation : LAAnalytics {
    long long _continuityEvent;
}

@property (readonly, weak, nonatomic) EvaluationRequest *request;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) BOOL biometryStarted;
@property (readonly, nonatomic) long long biometryAttempts;
@property (readonly, nonatomic) long long biometryFailures;
@property (readonly, nonatomic) long long biometryNoMatches;
@property (readonly, nonatomic) long long biometryResult;
@property (readonly, nonatomic) BOOL passcodeStarted;
@property (readonly, nonatomic) long long passcodeAttempts;
@property (readonly, nonatomic) long long passcodeFailures;
@property (readonly, nonatomic) long long passcodeResult;
@property (readonly, nonatomic) long long authenticationTypes;
@property (readonly, nonatomic) long long continuity;

- (void).cxx_destruct;
- (void)authenticationHasEvent:(long long)a0;
- (void)authenticationResult:(long long)a0 event:(long long)a1;
- (void)authenticationStartedForEvent:(long long)a0;
- (void)_authenticationStartedForEvent:(long long)a0 continuity:(BOOL)a1;
- (void)_biometryAttempt:(long long)a0;
- (void)_passcodeAccepted:(BOOL)a0;
- (void)authenticationAttempt:(long long)a0 event:(long long)a1;
- (void)biometryType:(long long)a0;
- (id)buildPayload;
- (void)continuityAuthenticationStartedForEvent:(long long)a0;
- (void)evaluationResult:(long long)a0;
- (id)initWithEvaluationRequest:(id)a0;
- (BOOL)shouldCollect;

@end
