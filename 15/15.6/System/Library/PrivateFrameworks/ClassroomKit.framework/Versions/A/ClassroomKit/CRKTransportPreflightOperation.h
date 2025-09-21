@class CATTransport, NSString, NSDictionary, CRKSession;

@interface CRKTransportPreflightOperation : CATOperation <CATTransportDelegate, CATRemoteTransportDelegate>

@property (readonly, nonatomic) CATTransport *transport;
@property (nonatomic) char decisionHandlerWantsBackoffReset;
@property (nonatomic) char connectionInterruptedDueToDecisionHandler;
@property (nonatomic) char invalidationTriggered;
@property (nonatomic) char cancellationRequested;
@property (readonly, weak, nonatomic) CRKSession *session;
@property (readonly, copy, nonatomic) NSDictionary *stateDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (char)isAsynchronous;
- (void)main;
- (void)transport:(id)a0 didInterruptWithError:(id)a1;
- (void)transport:(id)a0 encounteredTrustDecisionWhileTryingToSecure:(id)a1;
- (void)transportDidConnect:(id)a0;
- (void)transportDidInvalidate:(id)a0;
- (id)ASMUserIdentifierFromTrustDecision:(id)a0;
- (char)anyCommonNameInArrayHasLeaderPrefix:(id)a0;
- (void)clearDelegatesOnTransport:(id)a0;
- (char)commonNameHasLeaderPrefix:(id)a0;
- (char)errorIndicatesThatInterruptionWasCausedByDecisionHandler:(id)a0;
- (void)finishWithShouldResetBackoff:(char)a0;
- (void)finishWithTransport:(id)a0;
- (void)handleContinuationDecision:(unsigned long long)a0 forTrustDecision:(id)a1;
- (id)initWithTransport:(id)a0 session:(id)a1;
- (void)invalidateTransport;
- (char)isCommonNamePrefixValidForRemoteTransport:(id)a0;
- (char)isCommonNamePrefixValidForTransport:(id)a0;
- (char)isInsecureConnectionError:(id)a0;
- (void)respondToTrustDecision:(id)a0 withAllowUntrustedConnections:(char)a1;
- (void)setDelegatesOnTransport:(id)a0;

@end
