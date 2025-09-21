@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPNamedEntityReadOnlyClient : NSObject <PPNamedEntityClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (id)mapItemForPlaceName:(id)a0 error:(id *)a1;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)_unblockPendingQueries;
- (id)_remoteObjectProxy;
- (void)namedEntityRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)init;
- (BOOL)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)namedEntityRecordsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void)namedEntityBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
