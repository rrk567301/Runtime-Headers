@class GetMenstruationPredictionIntent, GetMenstruationPredictionIntentResponse;

@interface SiriWellnessIntents.GetMenstruationPredictionIntentHandler : NSObject <GetMenstruationPredictionIntentHandling> {
    void /* unknown type, empty encoding */ store;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleGetMenstruationPrediction:(GetMenstruationPredictionIntent *)a0 completion:(void (^)(GetMenstruationPredictionIntentResponse *))a1;

@end
