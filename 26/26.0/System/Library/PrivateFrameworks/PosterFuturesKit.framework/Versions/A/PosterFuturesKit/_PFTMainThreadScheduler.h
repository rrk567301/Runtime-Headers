@class NSString;
@protocol PFTScheduler;

@interface _PFTMainThreadScheduler : NSObject <PFTScheduler>

@property (readonly, nonatomic) id<PFTScheduler> inlineScheduler;
@property (readonly, nonatomic) id<PFTScheduler> jumpToMainScheduler;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)schedulerForImmediateExecution;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)init;
- (id)schedulerForDelayedExecution;
- (void).cxx_destruct;
- (id)performCancellableBlock:(id /* block */)a0;
- (id)performCancellableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;

@end
