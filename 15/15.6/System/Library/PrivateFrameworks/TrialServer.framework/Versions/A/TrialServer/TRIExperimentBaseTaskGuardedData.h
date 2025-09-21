@class NSMutableArray, TRITrialSystemTelemetry;

@interface TRIExperimentBaseTaskGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
    char logAsRollout;
}

- (void).cxx_destruct;

@end
