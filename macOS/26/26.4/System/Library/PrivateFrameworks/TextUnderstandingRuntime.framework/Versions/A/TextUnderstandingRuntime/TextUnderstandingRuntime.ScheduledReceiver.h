@interface TextUnderstandingRuntime.ScheduledReceiver : NSObject <SpotlightScheduledReceiver> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ pipelineManager;
    void /* unknown type, empty encoding */ suspensionManager;
}

- (void)resume;
- (void)suspend;
- (void).cxx_destruct;
- (id)init;
- (void)processDonation:(id)a0 completionHandler:(id /* block */)a1;

@end
