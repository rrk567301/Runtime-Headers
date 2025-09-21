@class BRCLRUDictionary;

@interface BRCAutoBugCaptureReporter : NSObject {
    BRCLRUDictionary *_reporterOperationRejectedThrottle;
    double _reporterOperationRejectedThrottlePeriod;
}

+ (id)sharedABCReporter;

- (id)_init;
- (void).cxx_destruct;
- (void)captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 forError:(id)a2 underlyingError:(id)a3;
- (void)_captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 withContext:(id)a2 timeout:(double)a3;
- (BOOL)_shouldIgnoreReportForOperationType:(id)a0 ofSubtype:(id)a1 forError:(id)a2;
- (void)captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 forError:(id)a2;
- (void)captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 forError:(id)a2 underlyingError:(id)a3 waitForCompletion:(BOOL)a4;
- (void)captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 withContext:(id)a2;
- (void)captureLogsForOperationType:(id)a0 ofSubtype:(id)a1 withContext:(id)a2 waitForCompletion:(BOOL)a3;

@end
