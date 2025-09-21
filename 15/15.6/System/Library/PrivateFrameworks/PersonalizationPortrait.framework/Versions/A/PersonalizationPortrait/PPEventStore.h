@class NSString, PPRecordMonitoringHelper, PPClientFeedbackHelper;

@interface PPEventStore : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)_loadEventNameRecordsWithDelegate:(id)a0;
- (id /* block */)_recordGenerator;
- (void)_sendChangesToDelegates:(id)a0;
- (char)interactionSummaryMetricsError:(id *)a0 block:(id /* block */)a1;
- (char)iterDailyEventHighlightsError:(id *)a0 block:(id /* block */)a1;
- (char)iterDailyEventHighlightsWithOptions:(int)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)iterEventHighlightsFrom:(id)a0 to:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)iterEventHighlightsFrom:(id)a0 to:(id)a1 options:(int)a2 error:(id *)a3 block:(id /* block */)a4;
- (char)iterEventNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)iterScoredEventsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)iterWeeklyEventHighlightsError:(id *)a0 block:(id /* block */)a1;
- (char)iterWeeklyEventHighlightsWithOptions:(int)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)loadEventNameRecordsAndMonitorChangesWithDelegate:(id)a0 error:(id *)a1;
- (void)logEventInteractionForEventWithEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (char)sendRTCLogsWithError:(id *)a0;

@end
