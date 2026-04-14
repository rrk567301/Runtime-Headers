@class NSString;
@protocol NAScheduler;

@interface _HKSPImmediateScheduler : NSObject <HKSPScheduler>

@property (readonly, nonatomic) id<NAScheduler> backingScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (id)performCancelableBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void)suspend;
- (void).cxx_destruct;
- (id)init;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)_performOnMainThreadIfNecessary:(id /* block */)a0;

@end
