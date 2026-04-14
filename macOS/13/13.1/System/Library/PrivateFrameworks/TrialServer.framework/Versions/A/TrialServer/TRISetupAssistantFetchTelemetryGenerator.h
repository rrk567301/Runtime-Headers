@class NSArray;

@interface TRISetupAssistantFetchTelemetryGenerator : NSObject {
    long long _latencyMilliseconds;
    NSArray *_telemetry;
}

- (void).cxx_destruct;
- (id)latencyMetric;
- (id)rolloutSystemTelemetry;
- (id)initWithDeadlineTimestamp:(id)a0 referenceDate:(id)a1 existingTelemetry:(id)a2;

@end
