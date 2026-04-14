@class NSString, NSDictionary, MechanismBase, NSMutableArray;
@protocol LACEvaluationRequest, LACAuthenticationUIManaging, LACBackoffCounter;

@interface MechanismUI_PC : MechanismBase <LACAuthenticationUIProxy, LACEvaluationEventHandling> {
    MechanismBase *_nonUiMechanism;
    MechanismBase *_backgroundMechanism;
    MechanismBase *_fallbackMechanism;
    NSMutableArray *_continueMechanisms;
    unsigned long long _mechanismIndex;
    id<LACEvaluationRequest> _request;
    long long _policy;
    NSDictionary *_internalInfo;
    NSDictionary *_policyOptions;
    NSDictionary *_additionalControllerInternalInfo;
    NSDictionary *_eventProcessing;
    NSDictionary *_previousResult;
    BOOL _usingSecureIO;
    id<LACAuthenticationUIManaging> _uiManager;
}

@property (readonly, nonatomic) id<LACBackoffCounter> backoffCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)externalizedContextWithError:(id *)a0;
- (void)internalInfoWithReply:(id /* block */)a0;
- (void)uiEvent:(long long)a0 options:(id)a1;
- (id)extendedInternalInfoForRemoteUI;
- (void)_failNonUiMechanismWithLostFocus:(id)a0;
- (BOOL)_shouldFinishWithError:(id)a0;
- (BOOL)_shouldFinishWithResult:(id)a0;
- (void)_startBackgroundMechanism;
- (void)_startBackgroundMechanismWithHints:(id)a0;
- (void)_startMechanismIfNeeded;
- (void)_startNonUiMechanismWithGotFocus:(id)a0;
- (void)_terminateBackgroundMechanismWithResult:(id)a0 error:(id)a1;
- (id)findMechanismWithEventIdentifier:(long long)a0;
- (void)finishRunWithResult:(id)a0 error:(id)a1;
- (void)handleEvaluationEvent:(id)a0 completion:(id /* block */)a1;
- (id)initWithNonUiMechanism:(id)a0 request:(id)a1 uiManager:(id)a2;
- (void)runWithHints:(id)a0 eventHandler:(id)a1 activationCompletion:(id /* block */)a2 reply:(id /* block */)a3;
- (void)runWithHints:(id)a0 eventsDelegate:(id)a1 reply:(id /* block */)a2;
- (BOOL)shouldFinishRunWithResult:(id)a0 error:(id)a1;

@end
