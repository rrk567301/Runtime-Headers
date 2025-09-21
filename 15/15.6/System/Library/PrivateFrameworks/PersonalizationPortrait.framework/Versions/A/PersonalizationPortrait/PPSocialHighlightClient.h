@class PPXPCClientPipelinedBatchQueryManager, PPXPCClientHelper;

@interface PPSocialHighlightClient : NSObject <PPSocialHighlightClientProtocol> {
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (char)rankedCollaborationsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 error:(id *)a3 handleBatch:(id /* block */)a4;
- (id)attributionForIdentifier:(id)a0 error:(id *)a1;
- (id)_internalRemoteObjectProxy;
- (void)_unblockPendingQueries;
- (double)decayInterval;
- (void)feedbackForAttribution:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 completion:(id /* block */)a4;
- (void)feedbackForHighlight:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 completion:(id /* block */)a4;
- (void)rankedHighlightsBatch:(id)a0 isLast:(char)a1 error:(id)a2 queryId:(unsigned long long)a3 completion:(id /* block */)a4;
- (char)rankedHighlightsForSyncedItems:(id)a0 client:(id)a1 variant:(id)a2 error:(id *)a3 handleBatch:(id /* block */)a4;
- (char)rankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 error:(id *)a3 handleBatch:(id /* block */)a4;

@end
