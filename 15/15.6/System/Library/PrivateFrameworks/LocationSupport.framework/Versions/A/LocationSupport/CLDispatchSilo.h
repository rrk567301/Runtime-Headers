@class NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    char _useCLPermissiveTimer;
    char _isQueueSuspended;
    NSNumber *_cohortId;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithIdentifier:(id)a0;
- (id)queue;
- (void)suspend;
- (char)isSuspended;
- (id)operationQueue;
- (id)newTimer;
- (void)heartBeat:(id)a0;
- (void)assertInside;
- (void)async:(id /* block */)a0;
- (id)initWithUnderlyingQueue:(id)a0;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(char)a1;
- (void)sync:(id /* block */)a0;
- (id)initMain;
- (id)getTimeCoercibleVariantInstance;
- (double)currentLatchedAbsoluteTimestamp;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)assertOutside;
- (char)inPermissiveMode;
- (void)intendToSync;

@end
