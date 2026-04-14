@class NSString;
@protocol CNScheduler;

@interface _CNMainThreadScheduler : NSObject <CNScheduler>

@property (readonly, nonatomic) id<CNScheduler> inlineScheduler;
@property (readonly, nonatomic) id<CNScheduler> jumpToMainScheduler;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (void)performBlock:(id /* block */)a0;
- (id)schedulerForImmediateExecution;
- (void).cxx_destruct;
- (id)init;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)schedulerForDelayedExecution;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;

@end
