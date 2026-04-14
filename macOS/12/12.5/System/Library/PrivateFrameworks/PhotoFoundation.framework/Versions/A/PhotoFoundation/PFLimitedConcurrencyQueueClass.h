@class NSMutableArray, PFSerialQueue;

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass {
    NSMutableArray *_slotQueues;
    unsigned long long _concurrencyLimit;
    PFSerialQueue *_serializer;
    NSMutableArray *_availableSlots;
    BOOL _usesBarrierBlocks;
    unsigned long long _suspendCount;
}

- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)dispatchSync:(id /* block */)a0;
- (void)dispatchBarrierSync:(id /* block */)a0;
- (void)dispatchBarrierAsync:(id /* block */)a0;
- (void)dispatchAsync:(id /* block */)a0;
- (void)dispatchGroup:(id)a0 async:(id /* block */)a1;
- (void)dispatchGroup:(id)a0 notify:(id /* block */)a1;
- (void)dispatchAfter:(unsigned long long)a0 block:(id /* block */)a1;
- (void)dispatchAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)a0 block:(id /* block */)a1;
- (id)_extensionsForTargetingQueue;
- (unsigned long long)concurrencyLimit;
- (void)_setupConcurrencyLimit:(unsigned long long)a0;
- (void)enqueueDelayedDrop;
- (id)_allocateOneSlotQueue;
- (void)dropOneSlotQueue;
- (id)checkoutAvailableSlot;
- (void)_allocateAllSlotQueues;
- (void)slotQueueMightBeUnused:(id)a0;

@end
