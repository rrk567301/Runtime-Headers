@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPContactClient : NSObject <PPContactClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)contactNameRecordChangesBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_remoteObjectProxy;
- (void)upcomingRelevantContactsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)init;
- (BOOL)contactHandlesForTopics:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)contactNameRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)rankedContactsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)contactHandlesForSourceBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)contactNameRecordsForClient:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)_unblockPendingQueries;
- (void)rankedContactsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)contactNameRecordChangesForClient:(id)a0 completion:(id /* block */)a1;
- (BOOL)contactHandlesForSource:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)contactHandlesForTopicsBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)upcomingRelevantContactsForQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)contactNameRecordChangesForClient:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;

@end
