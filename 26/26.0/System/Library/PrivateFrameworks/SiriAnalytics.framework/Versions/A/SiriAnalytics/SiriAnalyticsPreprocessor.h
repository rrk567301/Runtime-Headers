@interface SiriAnalyticsPreprocessor : NSObject {
    void /* unknown type, empty encoding */ underlyingActor;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetastore:(id)a0 logicalClocks:(id)a1 metastoreQueue:(id)a2 telemetry:(id)a3 messageStaging:(id)a4 messageTopics:(id)a5;
- (void)triggerWithReason:(long long)a0 completion:(id /* block */)a1;

@end
