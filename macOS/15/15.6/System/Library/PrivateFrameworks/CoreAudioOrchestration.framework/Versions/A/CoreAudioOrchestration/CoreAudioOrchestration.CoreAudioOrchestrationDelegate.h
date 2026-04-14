@interface CoreAudioOrchestration.CoreAudioOrchestrationDelegate : NSObject {
    void /* unknown type, empty encoding */ orchestrator;
}

- (id)init;
- (void).cxx_destruct;
- (id)activateConfigurationWithDescription:(id)a0;
- (id)createConfigurationWithDescription:(id)a0;
- (id)deactivateConfigurationWithDescription:(id)a0;
- (id)destroyConfigurationWithDescription:(id)a0;
- (id)getPropertyWithDescription:(id)a0;
- (id)registerWithEventCallback:(id)a0;
- (id)setPropertyWithDescription:(id)a0;
- (id)subscribeToEventWithDescription:(id)a0;
- (id)unsubscribeFromEventWithDescription:(id)a0;

@end
