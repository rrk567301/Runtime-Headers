@interface SensitiveContentAnalysisUI.RemoteViewModel : NSObject <SensitiveContentAnalysisUI.SCARemoteViewXPCProtocol> {
    void /* unknown type, empty encoding */ _connection;
    void /* unknown type, empty encoding */ _remoteViewConfig;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void).cxx_destruct;
- (id)init;
- (void)configureRemoteViewWith:(id)a0;
- (void)handleInterventionActionWith:(id)a0;

@end
