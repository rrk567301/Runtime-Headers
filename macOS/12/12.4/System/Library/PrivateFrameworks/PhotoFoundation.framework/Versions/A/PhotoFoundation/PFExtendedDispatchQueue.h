@class PFDispatchQueueExtensionManager, PFSerialQueue, PFDispatchQueue;

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock> {
    PFDispatchQueue *_queue;
    PFSerialQueue *_requestSerializer;
    PFDispatchQueueExtensionManager *_extensionManager;
    unsigned long long _suspendCount;
}

- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithQueue:(id)a0;
- (const char *)label;
- (void)suspend;
- (unsigned int)qualityOfService;
- (void)setTargetQueue:(id)a0;
- (BOOL)assertOnQueue;
- (void)dispatchSync:(id /* block */)a0;
- (void)removeAllQueuedBlocks;
- (void)removeAllQueuedBlocksAndWait;
- (void)enableExtension:(id)a0;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (void)disableExtension:(id)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (void)dispatchAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (id)dispatchCancellableAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (id)extensionMatching:(id /* block */)a0;
- (void)_invoke:(id /* block */)a0 extensionDataArray:(id)a1;
- (void)_performAsyncNotify:(id)a0 enqueueBlock:(id /* block */)a1;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)setSpecific:(void *)a0 forKey:(void *)a1;
- (void *)getSpecific:(void *)a0;
- (id)_dispatchQueueForSetTargetQueue;
- (BOOL)assertQueueBarrier;
- (BOOL)assertNotOnQueue;
- (void)dispatchAfterInterval:(double)a0 block:(id /* block */)a1;
- (id)dispatchCancellable:(id /* block */)a0;
- (id)dispatchCancellableAfterInterval:(double)a0 block:(id /* block */)a1;
- (id)dispatchCancellableGroup:(id)a0 notify:(id /* block */)a1;
- (id)_extensionsForTargetingQueue;
- (void)addExtensions:(id)a0;
- (id)wrappedQueue;
- (id)_extensionManager;
- (void)suspendRequests;
- (void)resumeRequests;
- (BOOL)onQueue;
- (void)runBlock:(id /* block */)a0;

@end
