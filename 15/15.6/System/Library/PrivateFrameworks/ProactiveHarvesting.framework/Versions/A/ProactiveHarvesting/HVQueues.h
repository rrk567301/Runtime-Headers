@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface HVQueues : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationSerialQueue;
}

+ (id)defaultQueues;

- (id)init;
- (void).cxx_destruct;
- (char)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (id)statsWithError:(id *)a0;
- (char)cleanupWithError:(id *)a0 shouldContinueBlock:(id /* block */)a1;
- (char)dequeueContent:(id *)a0 contentProtection:(id *)a1 dataSource:(unsigned int)a2 dataSourceContentState:(id)a3 minimumLevelOfService:(unsigned char)a4 inMemoryItemsOnly:(char)a5 error:(id *)a6;
- (char)dequeuedContentConsumedForDataSources:(unsigned int)a0 withError:(id *)a1;
- (char)dequeuedContentConsumedWithError:(id *)a0;
- (char)dequeuedContentNotConsumed:(id)a0 dataSource:(unsigned int)a1 error:(id *)a2;
- (char)enqueueContent:(id)a0 contentProtection:(id)a1 error:(id *)a2;
- (char)registerQueueObserver:(id)a0 dispatchQueue:(id)a1;
- (void)setQueue:(id)a0 forDataSource:(unsigned int)a1;
- (unsigned char)waitForObserversWithTimeout:(double)a0;

@end
