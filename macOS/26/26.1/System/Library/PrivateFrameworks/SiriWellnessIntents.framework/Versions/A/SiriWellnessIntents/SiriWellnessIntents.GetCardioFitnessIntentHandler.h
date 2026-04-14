@class GetCardioFitnessIntentResponse, GetCardioFitnessIntent;

@interface SiriWellnessIntents.GetCardioFitnessIntentHandler : NSObject <GetCardioFitnessIntentHandling> {
    void /* unknown type, empty encoding */ store;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleGetCardioFitness:(GetCardioFitnessIntent *)a0 completion:(void (^)(GetCardioFitnessIntentResponse *))a1;

@end
