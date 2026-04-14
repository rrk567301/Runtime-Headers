@interface SoundAnalysis.SNThresholdBasedSecondPassController : NSObject {
    void /* unknown type, empty encoding */ secondPassBeginThreshold;
    void /* unknown type, empty encoding */ secondPassEndThreshold;
    void /* unknown type, empty encoding */ secondPassHangoverPeriod;
    void /* unknown type, empty encoding */ secondPassTriggerTime;
    void /* unknown type, empty encoding */ firstResultBelowEndThresholdStartTime;
    void /* unknown type, empty encoding */ secondPassIsActive;
    void /* unknown type, empty encoding */ firstPassResultToComparableFunction;
    void /* unknown type, empty encoding */ secondPassResultToComparableFunction;
    void /* unknown type, empty encoding */ beginSecondPassHandler;
    void /* unknown type, empty encoding */ endSecondPassHandler;
}

- (id)init;
- (void).cxx_destruct;

@end
