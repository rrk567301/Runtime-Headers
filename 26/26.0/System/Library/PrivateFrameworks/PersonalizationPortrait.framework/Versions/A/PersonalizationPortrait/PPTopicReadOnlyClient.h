@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPTopicReadOnlyClient : NSObject <PPTopicClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)cachePath:(id *)a0;
- (void)_unblockPendingQueries;
- (void)registerUniversalSearchSpotlightFeedback:(id)a0 completion:(id /* block */)a1;
- (id)_remoteObjectProxy;
- (void)topicRecordBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)init;
- (void)topicBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)topicExtractionsFromTextBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)unmapMappedTopicIdentifier:(id)a0 mappingIdentifier:(id)a1 error:(id *)a2;
- (id)topicCacheSandboxExtensionToken:(id *)a0;
- (void)scoredMappedTopicBatch:(id)a0 isLast:(BOOL)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (BOOL)topicRecordsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)rankedTopicsWithQuery:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (BOOL)scoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 handleBatch:(id /* block */)a3;
- (BOOL)topicExtractionsFromText:(id)a0 error:(id *)a1 handleBatch:(id /* block */)a2;
- (void).cxx_destruct;

@end
