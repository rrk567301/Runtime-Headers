@interface SensitiveContentAnalysisUI.Coordinator : NSObject <EXHostViewControllerDelegate, SensitiveContentAnalysisUI.SCARemoteViewXPCProtocol> {
    void /* unknown type, empty encoding */ _config;
    void /* unknown type, empty encoding */ _connection;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void).cxx_destruct;
- (id)init;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)configureRemoteViewWith:(id)a0;
- (void)handleInterventionActionWith:(id)a0;

@end
