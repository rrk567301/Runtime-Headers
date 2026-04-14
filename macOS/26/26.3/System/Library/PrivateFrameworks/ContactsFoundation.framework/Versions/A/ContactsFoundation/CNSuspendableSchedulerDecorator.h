@class CNQueue, NSString, NSConditionLock;
@protocol CNScheduler;

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler>

@property (readonly) id<CNScheduler> scheduler;
@property (readonly) CNQueue *queue;
@property (readonly) NSConditionLock *lock;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suspendedSchedulerWithScheduler:(id)a0;
+ (id)resumedSchedulerWithScheduler:(id)a0;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)initWithScheduler:(id)a0;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)suspend;
- (void)performBlock:(id /* block */)a0;
- (void)resume;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)_nts_enqueueCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void)_performFirstQueuedTask;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;

@end
