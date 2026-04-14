@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLConcurrencyLimiter : NSObject {
    NSObject<OS_dispatch_queue> *_userInitiatedQueueA;
    NSObject<OS_dispatch_queue> *_backgroundAndUtilityQueue;
    NSObject<OS_dispatch_queue> *_highQOSAssetIngestQueue;
    NSObject<OS_dispatch_queue> *_exclusiveMomentsQueue;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
}

@property (readonly, nonatomic) BOOL isRunningInPhotolibraryd;

+ (unsigned long long)backgroundSystemTasksConcurrencyLimit;
+ (BOOL)isRunningUnderLimiter;
+ (id)backgroundSystemTasksConcurrencyGroupName;
+ (void)reportBlockEnqueued:(id /* block */)a0 isNotifyBlock:(BOOL)a1 onQueue:(id)a2 forLibrary:(id)a3;
+ (id)sharedLimiter;
+ (id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)a0;
+ (void)configureListTrackingForDispatchQueue:(id)a0;

- (id)_nextQueueForQoS:(unsigned int)a0 libraryRole:(unsigned long long)a1;
- (id)sharedUtilityQueue;
- (id)_queuesTrackingBlocks;
- (void)_handleUnexpectedQoSClass:(unsigned int)a0;
- (void)_sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 libraryRole:(unsigned long long)a2 libraryForTelemetry:(id)a3;
- (void)async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void)sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void)_syncPerformBlockNotOnAnyQueue:(id /* block */)a0;
- (void)groupNotify:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reportBlockDequeuedOnQueue:(id)a0 executionTimeNS:(unsigned long long)a1;
- (id)debugDescription;
- (id)sharedBackgroundQueue;
- (void)asyncPerformOnContext:(id)a0 identifyingBlock:(id /* block */)a1 block:(id /* block */)a2;
- (void)dispatchAsync:(id)a0 block:(id /* block */)a1;
- (void)dispatchAfterTime:(unsigned long long)a0 library:(id)a1 block:(id /* block */)a2;
- (void)_async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 libraryRole:(unsigned long long)a2 libraryForTelemetry:(id)a3;
- (long long)maxConcurrency;
- (void /* function */ *)_callOutForQoS:(unsigned int)a0 fromQueue:(id)a1;
- (id)init;

@end
