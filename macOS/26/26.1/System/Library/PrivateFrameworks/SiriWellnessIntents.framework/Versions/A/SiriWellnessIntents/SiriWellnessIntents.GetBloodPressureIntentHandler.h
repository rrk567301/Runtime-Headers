@class GetBloodPressureIntent, GetBloodPressureIntentResponse;

@interface SiriWellnessIntents.GetBloodPressureIntentHandler : NSObject <GetBloodPressureIntentHandling> {
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ provider;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleGetBloodPressure:(GetBloodPressureIntent *)a0 completion:(void (^)(GetBloodPressureIntentResponse *))a1;

@end
