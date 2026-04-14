@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithIdentifier:(id)a0;
- (id)queue;
- (void)suspend;
- (id)operationQueue;
- (BOOL)isSuspended;
- (id)newTimer;
- (void)heartBeat:(id)a0;
- (void)assertInside;
- (void)async:(id /* block */)a0;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (void)sync:(id /* block */)a0;
- (id)initMain;
- (double)currentLatchedAbsoluteTimestamp;
- (void)assertOutside;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (BOOL)inPermissiveMode;
- (id)getTimeCoercibleVariantInstance;
- (id)initWithUnderlyingQueue:(id)a0;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;

@end
