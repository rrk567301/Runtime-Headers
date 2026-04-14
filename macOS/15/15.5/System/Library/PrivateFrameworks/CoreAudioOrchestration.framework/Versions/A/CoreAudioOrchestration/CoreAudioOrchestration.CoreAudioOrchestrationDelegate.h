@interface CoreAudioOrchestration.CoreAudioOrchestrationDelegate : _TtCs12_SwiftObject <CoreAudioOrchestration> {
    void /* unknown type, empty encoding */ orchestrator;
}

- (id)setProperty:(id)a0;
- (id)getProperty:(id)a0;
- (id)activateConfiguration:(id)a0;
- (id)createConfiguration:(id)a0;
- (id)deactivateConfiguration:(id)a0;
- (id)destroyConfiguration:(id)a0;
- (id)registerEventCallback:(id)a0;
- (id)subscribeToConfigurationEventNotifications:(id)a0 with:(id)a1;
- (id)subscribeToEvent:(id)a0;
- (id)unsubscribeFromConfigurationEventNotifications:(id)a0;
- (id)unsubscribeFromEvent:(id)a0;

@end
