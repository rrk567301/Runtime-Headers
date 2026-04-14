@class _PASLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface PPDKStorage : NSObject {
    _PASLock *_entityLock;
    _PASLock *_topicLock;
    NSObject<OS_dispatch_semaphore> *_entityWriteSem;
    NSObject<OS_dispatch_semaphore> *_topicWriteSem;
}

@property (readonly, nonatomic) double topicStreamCooldownTimeRemaining;
@property (readonly, nonatomic) double entityStreamCooldownTimeRemaining;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (BOOL)deleteAllEventsInEventStream:(id)a0 error:(id *)a1;
- (id)tombstoneStream;
- (id)topicStream;
- (id)entityStream;
- (unsigned int)readBatchSize;
- (unsigned int)topicWriteBatchSize;
- (double)topicWriteBatchInterval;
- (unsigned int)namedEntityWriteBatchSize;
- (double)namedEntityWriteBatchInterval;
- (BOOL)iterEventBatchesMatchingPredicate:(id)a0 streams:(id)a1 sortDescriptors:(id)a2 batchSize:(unsigned long long)a3 error:(id *)a4 block:(id /* block */)a5;
- (BOOL)iterEventBatchesMatchingPredicate:(id)a0 streams:(id)a1 sortDescriptors:(id)a2 batchSize:(unsigned long long)a3 readMetaData:(BOOL)a4 remoteOnly:(BOOL)a5 error:(id *)a6 block:(id /* block */)a7;
- (BOOL)saveEvents:(id)a0 stream:(id)a1 maxRetries:(long long)a2 retryInterval:(double)a3 shouldContinueBlock:(id /* block */)a4;
- (BOOL)deleteEvents:(id)a0 error:(id *)a1;
- (BOOL)deleteAllEventsInEventStream:(id)a0 matchingPredicate:(id)a1 error:(id *)a2;
- (id)namedEntityRecordFromEvent:(id)a0;
- (id)eventForNamedEntityRecord:(id)a0 sourceDeviceID:(id)a1;
- (id)topicRecordFromEvent:(id)a0;
- (id)eventForTopicRecord:(id)a0 sourceDeviceID:(id)a1;
- (id)registerForNamedEntitiesRemoteAdditionWithBlock:(id /* block */)a0;
- (id)registerForNamedEntitiesRemoteDeletionWithBlock:(id /* block */)a0;
- (id)registerForTopicsRemoteAdditionWithBlock:(id /* block */)a0;
- (id)registerForTopicsRemoteDeletionWithBlock:(id /* block */)a0;

@end
