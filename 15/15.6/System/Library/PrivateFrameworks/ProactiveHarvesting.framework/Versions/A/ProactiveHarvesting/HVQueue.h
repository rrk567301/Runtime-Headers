@class NSString, _PASLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface HVQueue : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_semaphore> *_contentConsumedSemaphore;
    char _contentExpectedFromMultipleApps;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *contentProtection;

- (id)description;
- (void).cxx_destruct;
- (char)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (id)statsWithError:(id *)a0;
- (char)cleanupWithError:(id *)a0 shouldContinueBlock:(id /* block */)a1;
- (char)dequeueContent:(id *)a0 dataSourceContentState:(id)a1 minimumLevelOfService:(unsigned char)a2 inMemoryItemsOnly:(char)a3 error:(id *)a4;
- (char)dequeuedContentConsumedWithError:(id *)a0;
- (char)dequeuedContentNotConsumed:(id)a0 error:(id *)a1;
- (id)diskStorageStreamCount;
- (char)enqueueContent:(id)a0 error:(id *)a1;
- (char)ensureDeletionScanHasOccurredWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 biomeStream:(id)a1 memoryLimit:(short)a2 contentProtection:(id)a3 contentExpectedFromMultipleApps:(char)a4;
- (id)uniqueIdentifiersInDiskStorage;
- (id)uniqueIdentifiersInMemoryStorage;
- (unsigned char)waitForDequeuedContentConsumedWithTimeout:(double)a0;

@end
