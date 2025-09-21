@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler>

@property (readonly, nonatomic) unsigned long long nextSchedulableTick;
@property (readonly, nonatomic) unsigned long long stopTime;
@property (readonly, nonatomic) CNQueue *queue;
@property (readonly, nonatomic) char isStarted;
@property (readonly, nonatomic) char isPerforming;
@property (readonly) unsigned long long clock;
@property (readonly) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithScheduler:(id)a0;
+ (unsigned long long)timeWithDelay:(double)a0 fromClock:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)performBlock:(id /* block */)a0;
- (void)stop;
- (unsigned long long)_nextSchedulableTick;
- (char)_performJobs;
- (id)_scheduleBlock:(id /* block */)a0 atTime:(unsigned long long)a1;
- (void)advanceBy:(unsigned long long)a0;
- (void)advanceTo:(unsigned long long)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (char)hasJobsScheduled;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;

@end
