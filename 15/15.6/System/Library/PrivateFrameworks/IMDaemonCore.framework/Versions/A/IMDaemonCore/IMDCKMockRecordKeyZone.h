@interface IMDCKMockRecordKeyZone : IMDCKMockRecordZone

- (void)_handleFetchingExitRecordOperation:(id)a0;
- (void)_handleWritingCloudKitMetrics:(id)a0;
- (char)_operationIsCloudKitMetricsOperation:(id)a0;
- (void)handleOperation:(id)a0;

@end
