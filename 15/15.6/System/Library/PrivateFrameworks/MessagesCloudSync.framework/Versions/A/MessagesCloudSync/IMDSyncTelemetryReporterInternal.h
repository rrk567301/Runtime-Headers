@interface IMDSyncTelemetryReporterInternal : NSObject {
    void /* unknown type, empty encoding */ reportingQueue;
    void /* unknown type, empty encoding */ reporter;
}

- (id)init;
- (void).cxx_destruct;
- (char)postMessage:(id)a0 category:(long long)a1 error:(id *)a2;

@end
