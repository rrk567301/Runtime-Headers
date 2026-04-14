@class NSDate;

@interface AMSMediaTokenServiceThrottler : NSObject

@property unsigned long long attemptNumber;
@property (retain) NSDate *throttleDate;
@property double baseSleepInterval;
@property double maxSleepInterval;

- (void).cxx_destruct;
- (void)reset;
- (void)throttle;
- (BOOL)shouldThrottle;
- (id)initWithBaseSleepInterval:(double)a0 maxSleepInterval:(double)a1;
- (double)_calculateThrottleInterval;

@end
