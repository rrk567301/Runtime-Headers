@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPLocationReadOnlyClient : NSObject <PPLocationClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)locationBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)_unblockPendingQueries;
- (id)_remoteObjectProxy;
- (id)init;
- (BOOL)locationRecordsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)rankedLocationsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)locationRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
