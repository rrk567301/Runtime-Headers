@class PPLocalTopicStore, PPLocalNamedEntityStore, PPLocalEventStore, PPLocalLocationStore, PPLocalConnectionsStore, _PASLock, PPLocalQuickTypeBroker, PPLocalContactStore, PPSQLDatabase;

@interface PPFeedbackStorage : NSObject {
    PPSQLDatabase *_db;
    PPLocalNamedEntityStore *_namedEntityStoreOverride;
    PPLocalTopicStore *_topicStoreOverride;
    PPLocalLocationStore *_locationStoreOverride;
    PPLocalQuickTypeBroker *_quickTypeBrokerOverride;
    PPLocalContactStore *_contactStoreOverride;
    PPLocalEventStore *_eventStoreOverride;
    PPLocalConnectionsStore *_connectionsStoreOverride;
    _PASLock *_lock;
}

+ (void)logFeedback:(id)a0 domain:(unsigned char)a1 domainStatus:(unsigned char)a2 inBackground:(char)a3;
+ (id)storeTypeDescription:(unsigned char)a0;

- (id)init;
- (void).cxx_destruct;
- (char)deleteExpiredFeedbackWithShouldContinueBlock:(id /* block */)a0;
- (id)mappedTopicsPendingFeedbackWithShouldContinueBlock:(id /* block */)a0;
- (id)pendingTopicFeedback;
- (char)processPendingFeedbackWithShouldContinueBlock:(id /* block */)a0 error:(id *)a1;
- (char)storePendingFeedback:(id)a0 storeType:(unsigned char)a1 error:(id *)a2;

@end
