@interface _TtCV26SensitiveContentAnalysisUI11_RemoteView11Coordinator : NSObject <EXHostViewControllerDelegate, SensitiveContentAnalysisUI.SCARemoteViewXPCProtocol> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)configureRemoteViewWith:(id)a0;
- (void)handleInterventionActionWith:(id)a0;

@end
