@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPLocationReadOnlyClient : NSObject <PPLocationClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_unblockPendingQueries;
- (void)locationBatch:(id)a0 isLast:(char)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)locationRecordBatch:(id)a0 isLast:(char)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (char)locationRecordsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (char)rankedLocationsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;

@end
