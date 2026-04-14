@class GetAcitivitySummaryIntent, GetAcitivitySummaryIntentResponse;

@interface SiriWellnessIntents.GetActivitySummaryIntentHandler : NSObject <GetAcitivitySummaryIntentHandling> {
    void /* unknown type, empty encoding */ store;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleGetAcitivitySummary:(GetAcitivitySummaryIntent *)a0 completion:(void (^)(GetAcitivitySummaryIntentResponse *))a1;

@end
