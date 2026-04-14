@class NSString, NSDictionary, MechanismBase, NSMutableArray;
@protocol LARemoteUI, LAUIDelegate;

@interface MechanismUI : MechanismBase <LARemoteUIHost, LAUIMechanism, LAUIDelegate> {
    id<LARemoteUI> _remoteUI;
    MechanismBase *_nonUiMechanism;
    MechanismBase *_backgroundMechanism;
    MechanismBase *_fallbackMechanism;
    NSMutableArray *_continueMechanisms;
    unsigned long long _mechanismIndex;
    long long _policy;
    NSDictionary *_internalInfo;
    NSDictionary *_policyOptions;
    NSDictionary *_additionalControllerInternalInfo;
    NSDictionary *_eventProcessing;
    NSDictionary *_previousResult;
    BOOL _wantMoreUiIgnoreDisappear;
    id /* block */ _showMoreUiBlock;
    BOOL _uiDisappeared;
    BOOL _usingSecureIO;
    id<LAUIDelegate> _companionOriginalDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)authMethodWithReply:(id /* block */)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)externalizedContextWithReply:(id /* block */)a0;
- (void)checkClearForIdleExitWithCompletion:(id /* block */)a0;
- (void)connectRemoteUI:(id)a0 reply:(id /* block */)a1;
- (void)disconnectRemoteUI;
- (void)internalInfoWithReply:(id /* block */)a0;
- (void)uiEvent:(long long)a0 options:(id)a1;
- (void)uiFailureWithError:(id)a0;
- (void)uiSuccessWithResult:(id)a0;
- (void)_showUI;
- (long long)_authenticationRequirementsForMechanism:(id)a0 uiController:(long long)a1;
- (void)_connectNonUiMechanism:(id)a0 withRemoteUi:(id)a1;
- (void)_failNonUiMechanismWithLostFocus:(id)a0;
- (void)_startBackgroundMechanism;
- (void)_startBackgroundMechanismWithHints:(id)a0;
- (void)_startNonUiMechanismWithGotFocus:(id)a0;
- (void)_terminateBackgroundMechanismWithResult:(id)a0 error:(id)a1;
- (void)_transitionToController:(long long)a0 internalInfo:(id)a1;
- (id)findMechanismWithEventIdentifier:(long long)a0;
- (void)finishRunWithResult:(id)a0 error:(id)a1;
- (id)initWithNonUiMechanism:(id)a0 eventProcessing:(id)a1 policy:(long long)a2 internalInfo:(id)a3 request:(id)a4;
- (void)runWithHints:(id)a0 eventsDelegate:(id)a1 reply:(id /* block */)a2;
- (void)willFinish;

@end
