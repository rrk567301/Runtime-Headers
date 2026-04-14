@class GetSleepAnalysisIntentResponse, GetSleepAnalysisIntent;

@interface SiriWellnessIntents.GetSleepAnalysisIntentHandler : NSObject <GetSleepAnalysisIntentHandling> {
    void /* unknown type, empty encoding */ store;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleGetSleepAnalysis:(GetSleepAnalysisIntent *)a0 completion:(void (^)(GetSleepAnalysisIntentResponse *))a1;

@end
