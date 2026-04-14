@class NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
    NSNumber *_cohortId;
}

- (id)operationQueue;
- (id)initWithUnderlyingQueue:(id)a0;
- (void)async:(id /* block */)a0;
- (void)resume;
- (id)getTimeCoercibleVariantInstance;
- (id)newTimer;
- (id)debugDescription;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (void)assertInside;
- (void)assertOutside;
- (void)suspend;
- (void)heartBeat:(id)a0;
- (BOOL)isSuspended;
- (id)queue;
- (double)currentLatchedAbsoluteTimestamp;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)inPermissiveMode;
- (void)intendToSync;
- (void)sync:(id /* block */)a0;
- (id)initMain;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;

@end
