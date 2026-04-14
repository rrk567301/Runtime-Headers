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

- (void)invalidate;
- (void)shouldFire;
- (void)setNextFireDelay:(double)a0 interval:(double)a1;
- (id)initInSilo:(id)a0 withScheduler:(id)a1;
- (void)updateScheduler;
- (void).cxx_destruct;
- (double)nextFireTime;
- (void)setNextFireTime:(double)a0 interval:(double)a1;
- (double)nextFireDelayRaw;
- (void)dbgAssertInside;
- (void)setNextFireTime:(double)a0;

@end
