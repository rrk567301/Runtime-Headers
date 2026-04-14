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
- (void)async:(id /* block */)a0;
- (void)assertOutside;
- (id)debugDescription;
- (id)initWithIdentifier:(id)a0;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (id)newTimer;
- (BOOL)inPermissiveMode;
- (void)suspend;
- (id)operationQueue;
- (BOOL)isSuspended;
- (void)heartBeat:(id)a0;
- (void)resume;
- (id)initWithUnderlyingQueue:(id)a0;
- (void).cxx_destruct;
- (void)intendToSync;
- (id)getTimeCoercibleVariantInstance;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (id)initMain;
- (double)currentLatchedAbsoluteTimestamp;
- (id)queue;
- (void)assertInside;

@end
