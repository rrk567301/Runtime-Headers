@class NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
    NSNumber *_cohortId;
}

- (void)sync:(id /* block */)a0;
- (BOOL)isSuspended;
- (id)operationQueue;
- (BOOL)inPermissiveMode;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (void)suspend;
- (id)initWithUnderlyingQueue:(id)a0;
- (id)debugDescription;
- (id)getTimeCoercibleVariantInstance;
- (void)resume;
- (id)newTimer;
- (id)initWithIdentifier:(id)a0;
- (id)initMain;
- (void)assertOutside;
- (void).cxx_destruct;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (void)heartBeat:(id)a0;
- (void)async:(id /* block */)a0;
- (void)assertInside;
- (id)queue;
- (void)intendToSync;
- (double)currentLatchedAbsoluteTimestamp;

@end
