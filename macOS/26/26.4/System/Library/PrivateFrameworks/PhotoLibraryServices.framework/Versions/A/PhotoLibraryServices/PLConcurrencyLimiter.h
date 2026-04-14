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

+ (id)backgroundSystemTasksConcurrencyGroupName;
+ (void)reportBlockEnqueued:(id /* block */)a0 isNotifyBlock:(BOOL)a1 onQueue:(id)a2 forLibrary:(id)a3;
+ (BOOL)isRunningUnderLimiter;
+ (id)sharedLimiter;
+ (void)configureListTrackingForDispatchQueue:(id)a0;
+ (unsigned long long)backgroundSystemTasksConcurrencyLimit;
+ (id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)a0;

- (void)_async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 libraryRole:(unsigned long long)a2 libraryForTelemetry:(id)a3;
- (id)debugDescription;
- (void)dispatchAfterTime:(unsigned long long)a0 library:(id)a1 block:(id /* block */)a2;
- (void)asyncPerformOnContext:(id)a0 identifyingBlock:(id /* block */)a1 block:(id /* block */)a2;
- (void)reportBlockDequeuedOnQueue:(id)a0 executionTimeNS:(unsigned long long)a1;
- (void)async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void)_handleUnexpectedQoSClass:(unsigned int)a0;
- (void)groupNotify:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)dispatchAsync:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 libraryRole:(unsigned long long)a2 libraryForTelemetry:(id)a3;
- (id)sharedBackgroundQueue;
- (id)_nextQueueForQoS:(unsigned int)a0 libraryRole:(unsigned long long)a1;
- (id)init;
- (void)sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void)_syncPerformBlockNotOnAnyQueue:(id /* block */)a0;
- (id)_queuesTrackingBlocks;
- (long long)maxConcurrency;
- (void /* function */ *)_callOutForQoS:(unsigned int)a0 fromQueue:(id)a1;
- (id)sharedUtilityQueue;

@end
