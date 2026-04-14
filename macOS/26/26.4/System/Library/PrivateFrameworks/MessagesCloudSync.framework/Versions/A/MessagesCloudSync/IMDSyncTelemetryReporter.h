@class IMDSyncTelemetryReporterInternal;

@interface IMDSyncTelemetryReporter : NSObject {
    IMDSyncTelemetryReporterInternal *_telemetryReporter;
}

- (void).cxx_destruct;
- (id)init;
- (void)postMessage:(id)a0 category:(long long)a1;

@end
