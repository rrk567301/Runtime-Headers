@class NSObject;

@interface VUIMetricsJetEngine : NSObject {
    void /* unknown type, empty encoding */ sharedPipeline;
    void /* unknown type, empty encoding */ recorder;
}

@property (class, nonatomic, readonly) VUIMetricsJetEngine *sharedInstance;

@property (nonatomic, retain) NSObject *wrappedPipeline;

+ (id)convertClickDataToImpressionsData:(id)a0 index:(long long)a1;
+ (id)convertClickDataToLocationData:(id)a0 index:(long long)a1;

- (void)flushMetrics;
- (void)setMonitorsLifecycleEvents:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)flushMetricsWithCompletion:(id /* block */)a0;
- (BOOL)isSharedContent:(id)a0;
- (id)recordEventWithTopic:(id)a0 eventType:(id)a1 eventData:(id)a2 pageData:(id)a3;

@end
