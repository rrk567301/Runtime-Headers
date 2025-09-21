@interface TextUnderstandingRuntime.ScheduledReceiver : NSObject <SpotlightScheduledReceiver> {
    void /* unknown type, empty encoding */ pipelineManager;
    void /* unknown type, empty encoding */ suspensionManager;
}

- (void)suspend;
- (void)resume;
- (id)init;
- (void).cxx_destruct;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1 name:(id)a2 completionHandler:(id /* block */)a3;

@end
