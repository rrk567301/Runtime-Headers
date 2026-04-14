@class NSString;
@protocol NAScheduler;

@interface _HKSPImmediateScheduler : NSObject <HKSPScheduler>

@property (readonly, nonatomic) id<NAScheduler> backingScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)performCancelableBlock:(id /* block */)a0;
- (void)suspend;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)resume;
- (void).cxx_destruct;
- (id)init;
- (void)performBlock:(id /* block */)a0;
- (void)_performOnMainThreadIfNecessary:(id /* block */)a0;

@end
