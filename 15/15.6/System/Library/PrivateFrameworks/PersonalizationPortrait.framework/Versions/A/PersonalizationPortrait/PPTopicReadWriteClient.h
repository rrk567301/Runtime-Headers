@class PPXPCClientHelper;

@interface PPTopicReadWriteClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (char)_doDeletionSyncCallWithError:(id *)a0 deletedCount:(unsigned long long *)a1 syncCall:(id /* block */)a2;
- (char)_doSyncCallWithError:(id *)a0 syncCall:(id /* block */)a1;
- (char)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (char)cloudSyncWithError:(id *)a0;
- (char)computeAndCacheTopicScores:(id *)a0;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThanDate:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllTopicsWithTopicId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(char)a3 sentimentScore:(double)a4 exactMatchesInSourceText:(id)a5 error:(id *)a6;

@end
