@class NSObject;
@protocol OS_dispatch_queue;

@interface PFDispatchQueueBaseClass : PFDispatchQueue <PFDispatchQueueMethods> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (unsigned int)qualityOfService;
- (id)initWithQueue:(id)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void)suspend;
- (void)resume;
- (const char *)label;
- (id)description;
- (BOOL)assertOnQueue;
- (void)setTargetQueue:(id)a0;
- (void).cxx_destruct;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchSync:(id /* block */)a0;
- (id)_dispatchQueueForSetTargetQueue;
- (id)_extensionManager;
- (id)_extensionsForTargetingQueue;
- (BOOL)assertNotOnQueue;
- (BOOL)assertQueueBarrier;
- (void)dispatchAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchAfterInterval:(double)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (id)dispatchCancellable:(id /* block */)a0;
- (id)dispatchCancellableAfterDelay:(unsigned long long)a0 block:(id /* block */)a1;
- (id)dispatchCancellableAfterInterval:(double)a0 block:(id /* block */)a1;
- (id)dispatchCancellableGroup:(id)a0 notify:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (id)extensionMatching:(id /* block */)a0;
- (void *)getSpecific:(void *)a0;
- (void)setSpecific:(void *)a0 forKey:(void *)a1;

@end
