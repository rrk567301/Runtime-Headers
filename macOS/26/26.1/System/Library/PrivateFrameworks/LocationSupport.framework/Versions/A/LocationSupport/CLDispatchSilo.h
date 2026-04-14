@class NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
    NSNumber *_cohortId;
}

- (id)queue;
- (void)heartBeat:(id)a0;
- (id)operationQueue;
- (id)getTimeCoercibleVariantInstance;
- (BOOL)isSuspended;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (void)resume;
- (void)suspend;
- (void)sync:(id /* block */)a0;
- (void)intendToSync;
- (void)async:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)newTimer;
- (void).cxx_destruct;
- (id)initWithUnderlyingQueue:(id)a0;
- (BOOL)inPermissiveMode;
- (id)debugDescription;
- (double)currentLatchedAbsoluteTimestamp;
- (void)assertInside;
- (void)assertOutside;
- (id)initMain;

@end
