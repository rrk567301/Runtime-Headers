@class CLSilo;
@protocol CLTimerScheduler;

@interface CLTimer : NSObject {
    double _delaySetAtTime;
    CLSilo *_silo;
    id<CLTimerScheduler> _scheduler;
}

@property (nonatomic) double nextFireTime;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) double nextFireDelay;
@property (nonatomic) double fireInterval;

- (void)shouldFire;
- (void)updateScheduler;
- (id)initInSilo:(id)a0 withScheduler:(id)a1;
- (void)invalidate;
- (void)setNextFireDelay:(double)a0 interval:(double)a1;
- (void)setNextFireTime:(double)a0 interval:(double)a1;
- (void).cxx_destruct;
- (double)nextFireDelayRaw;
- (double)nextFireTime;
- (void)setNextFireTime:(double)a0;
- (void)dbgAssertInside;

@end
