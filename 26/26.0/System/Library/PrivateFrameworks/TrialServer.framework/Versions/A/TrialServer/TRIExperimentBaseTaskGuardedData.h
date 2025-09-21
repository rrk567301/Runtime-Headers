@class NSMutableArray, TRITrialSystemTelemetry;

@interface TRIExperimentBaseTaskGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
}

- (void).cxx_destruct;

@end
