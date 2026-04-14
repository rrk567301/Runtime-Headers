@class LogPeriodIntent, LogPeriodIntentResponse;

@interface SiriWellnessIntents.LogPeriodIntentHandler : NSObject <LogPeriodIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleLogPeriod:(LogPeriodIntent *)a0 completion:(void (^)(LogPeriodIntentResponse *))a1;

@end
