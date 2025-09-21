@class NSMutableArray, TRITrialSystemTelemetry;

@interface TRIExperimentTaskSupportGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
    char logAsV1Rollout;
}

- (void).cxx_destruct;

@end
