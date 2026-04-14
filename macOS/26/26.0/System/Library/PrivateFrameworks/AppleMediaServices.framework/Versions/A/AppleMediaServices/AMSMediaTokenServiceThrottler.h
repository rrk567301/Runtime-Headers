@class NSDate;

@interface AMSMediaTokenServiceThrottler : NSObject

@property unsigned long long attemptNumber;
@property (retain) NSDate *throttleDate;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessLock;
@property (readonly, nonatomic) double baseSleepInterval;
@property (readonly, nonatomic) double maxSleepInterval;

- (void)reset;
- (BOOL)shouldThrottle;
- (void)setBaseSleepInterval:(double)a0 maxSleepInterval:(double)a1;
- (id)initWithBaseSleepInterval:(double)a0 maxSleepInterval:(double)a1;
- (double)_calculateThrottleInterval;
- (void)throttle;
- (void).cxx_destruct;

@end
