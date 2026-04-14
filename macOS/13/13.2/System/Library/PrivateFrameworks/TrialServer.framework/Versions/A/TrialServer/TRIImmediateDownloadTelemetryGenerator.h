@class NSArray;

@interface TRIImmediateDownloadTelemetryGenerator : NSObject {
    BOOL _allowExpensiveNetworking;
    long long _latencyMilliseconds;
    NSArray *_telemetry;
}

- (void).cxx_destruct;
- (id)initWithLatencyMilliseconds:(long long)a0 allowExpensiveNetworking:(BOOL)a1 existingTelemetry:(id)a2;
- (id)latencyMetric;
- (id)rolloutSystemTelemetry;

@end
