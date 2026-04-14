@class NSString, PPRecordMonitoringHelper, PPClientFeedbackHelper;

@interface PPContactStore : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)iterRankedContactsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)_loadContactNameRecordsWithDelegate:(id)a0;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)contactHandlesForSource:(id)a0 error:(id *)a1;
- (void)_sendChangesToDelegates;
- (id)upcomingRelevantContactsForQuery:(id)a0 error:(id *)a1;
- (BOOL)iterContactNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)contactHandlesForTopics:(id)a0 error:(id *)a1;
- (id /* block */)_recordGenerator;
- (id)init;
- (BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)a0 error:(id *)a1;

@end
