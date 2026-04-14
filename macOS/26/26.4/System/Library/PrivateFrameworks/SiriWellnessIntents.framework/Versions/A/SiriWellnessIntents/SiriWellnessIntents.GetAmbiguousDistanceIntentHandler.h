@class GetAmbiguousDistanceIntentResponse, GetAmbiguousDistanceIntent;

@interface SiriWellnessIntents.GetAmbiguousDistanceIntentHandler : NSObject <GetAmbiguousDistanceIntentHandling> {
    void /* unknown type, empty encoding */ provider;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleGetAmbiguousDistance:(GetAmbiguousDistanceIntent *)a0 completion:(void (^)(GetAmbiguousDistanceIntentResponse *))a1;

@end
