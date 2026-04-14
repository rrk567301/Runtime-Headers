@interface SiriAnalyticsPreprocessor : NSObject {
    void /* unknown type, empty encoding */ underlyingActor;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMetastore:(id)a0 telemetry:(id)a1 messageStaging:(id)a2 messageTopics:(id)a3;
- (void)triggerWithReason:(long long)a0 completion:(id /* block */)a1;

@end
