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

+ (void)configureListTrackingForDispatchQueue:(id)a0;
+ (id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)a0;
+ (BOOL)isRunningUnderLimiter;
+ (void)reportBlockDequeuedOnQueue:(id)a0;
+ (void)reportBlockEnqueued:(id /* block */)a0 onQueue:(id)a1 forLibrary:(id)a2;
+ (id)sharedLimiter;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)_syncPerformBlockNotOnAnyQueue:(id /* block */)a0;
- (void)async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void)_async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 libraryRole:(unsigned long long)a2 libraryForTelemetry:(id)a3;
- (void /* function */ *)_callOutForQoS:(unsigned int)a0 fromQueue:(id)a1;
- (void)_handleUnexpectedQoSClass:(unsigned int)a0;
- (id)_nextQueueForQoS:(unsigned int)a0 libraryRole:(unsigned long long)a1;
- (id)_queuesTrackingBlocks;
- (void)_sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 libraryRole:(unsigned long long)a2 libraryForTelemetry:(id)a3;
- (void)asyncPerformOnContext:(id)a0 identifyingBlock:(id /* block */)a1 block:(id /* block */)a2;
- (void)dispatchAsync:(id)a0 block:(id /* block */)a1;
- (long long)maxConcurrency;
- (id)sharedBackgroundQueue;
- (id)sharedUtilityQueue;
- (void)sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;

@end
