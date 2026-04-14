@interface SiriAnalytics.SiriAnalyticsMessageStaging : NSObject {
    void /* unknown type, empty encoding */ stagingActor;
}

- (id)init;
- (void).cxx_destruct;
- (void)bootstrapAndPrune;
- (id)initWithInternalTelemetry:(id)a0;
- (void)purgeWithCompletionHandler:(void (^)(void))a0;

@end
