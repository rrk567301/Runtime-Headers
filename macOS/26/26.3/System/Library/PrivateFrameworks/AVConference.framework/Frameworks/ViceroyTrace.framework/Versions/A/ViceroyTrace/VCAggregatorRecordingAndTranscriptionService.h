@class NSString;

@interface VCAggregatorRecordingAndTranscriptionService : VCAggregator {
    NSString *_uuid;
    unsigned char _usage;
}

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (id)aggregatedCallReports;
- (id)dispatchedAggregatedCallReport;
- (void)dispatchedProcessEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)processEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)processRecordingAndTranscriptionServiceRealtimeEventWithPayload:(id)a0;
- (void)processRecordingAndTranscriptionServiceUsageWithPayload:(id)a0;
- (id)reportingAndTranscriptionServiceAggregatedReport;

@end
