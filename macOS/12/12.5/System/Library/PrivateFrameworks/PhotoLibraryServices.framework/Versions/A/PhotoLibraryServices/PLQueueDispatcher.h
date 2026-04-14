@class PLQueueDispatcherContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLQueueDispatcher : NSObject {
    PLQueueDispatcherContext *_userInitiatedContext;
    PLQueueDispatcherContext *_utilityContext;
    PLQueueDispatcherContext *_backgroundContext;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
}

+ (void)reportBlockEnqueued:(id /* block */)a0 onContext:(id)a1 forLibrary:(id)a2;
+ (void)reportBlockDequeuedOnContext:(id)a0;
+ (id)debugDescriptionOfEnqueuedBlocksOnContext:(id)a0;
+ (id)sharedQueueDispatcher;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)sharedUtilityQueue;
- (id)sharedBackgroundQueue;
- (void)async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void)sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void)_handleUnexpectedQoSClass:(unsigned int)a0;
- (id)contextForCurrentQoS;
- (void /* function */ *)callOutForCurrentQoS;
- (void)_syncPerformBlockNotOnAnyContext:(id /* block */)a0;
- (id)_contextsTrackingBlocks;

@end
