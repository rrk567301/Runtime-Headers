@class LogBloodPressureIntentResponse, LogBloodPressureIntent;

@interface SiriWellnessIntents.LogBloodPressureIntentHandler : NSObject <LogBloodPressureIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleLogBloodPressure:(LogBloodPressureIntent *)a0 completion:(void (^)(LogBloodPressureIntentResponse *))a1;

@end
