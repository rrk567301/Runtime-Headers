@interface AskToUI.HostSendAskToQuestionFlowCoordinator : NSObject <AskToUI.HostSendAskToQuestionFlowXPCProtocol, EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ xpcConnection;
    void /* unknown type, empty encoding */ dismissBlock;
    void /* unknown type, empty encoding */ onEnd;
    void /* unknown type, empty encoding */ messageComposeRequest;
    void /* unknown type, empty encoding */ remoteController;
    void /* unknown type, empty encoding */ presentingWindow;
}

- (id)init;
- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)dismissWithPropagatingError:(id)a0 reply:(id /* block */)a1;

@end
