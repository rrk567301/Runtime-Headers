@interface AskToUI.HostResponseUIFlowCoordinator : NSObject <AskToUI.ResponseUIHostXPCProtocol, EXHostViewControllerDelegate, NSWindowDelegate> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ dismissBlock;
    void /* unknown type, empty encoding */ onEnd;
    void /* unknown type, empty encoding */ remoteController;
    void /* unknown type, empty encoding */ xpcConnection;
    void /* unknown type, empty encoding */ currentPayload;
    void /* unknown type, empty encoding */ onAnswer;
    void /* unknown type, empty encoding */ presentingWindow;
}

- (void)windowWillClose:(id)a0;
- (void).cxx_destruct;
- (void)dismiss;
- (id)init;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)didSelectAnswerChoice:(id)a0;

@end
