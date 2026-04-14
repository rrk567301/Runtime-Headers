@class NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
    NSNumber *_cohortId;
}

- (id)debugDescription;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)queue;
- (void)suspend;
- (id)operationQueue;
- (BOOL)isSuspended;
- (id)newTimer;
- (void)heartBeat:(id)a0;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (void)assertInside;
- (void)async:(id /* block */)a0;
- (void)sync:(id /* block */)a0;
- (id)initMain;
- (void)assertOutside;
- (double)currentLatchedAbsoluteTimestamp;
- (void)intendToSync;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)getTimeCoercibleVariantInstance;
- (BOOL)inPermissiveMode;
- (id)initWithUnderlyingQueue:(id)a0;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;

@end
