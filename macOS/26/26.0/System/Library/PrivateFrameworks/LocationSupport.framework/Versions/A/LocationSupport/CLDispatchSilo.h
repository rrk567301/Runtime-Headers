@class NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
    NSNumber *_cohortId;
}

- (id)newTimer;
- (void)async:(id /* block */)a0;
- (id)operationQueue;
- (id)debugDescription;
- (BOOL)isSuspended;
- (void)sync:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initMain;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)assertInside;
- (void)suspend;
- (void)resume;
- (id)initWithUnderlyingQueue:(id)a0;
- (void)intendToSync;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (id)queue;
- (void)assertOutside;
- (BOOL)inPermissiveMode;
- (id)getTimeCoercibleVariantInstance;
- (void)heartBeat:(id)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (void).cxx_destruct;

@end
