@interface VUIMetricsJetEngine : NSObject {
    void /* unknown type, empty encoding */ sharedPipeline;
    void /* unknown type, empty encoding */ recorder;
}

@property (class, nonatomic, readonly) VUIMetricsJetEngine *sharedInstance;

@property (nonatomic, retain) void /* unknown type, empty encoding */ wrappedPipeline;

- (id)init;
- (void).cxx_destruct;
- (void)setMonitorsLifecycleEvents:(BOOL)a0;
- (void)flushMetrics;
- (void)flushMetricsWithCompletion:(id /* block */)a0;
- (BOOL)isSharedContent:(id)a0;
- (id)recordEventWithTopic:(id)a0 eventType:(id)a1 eventData:(id)a2 pageData:(id)a3;

@end
