@interface HMFExponentialBackoffTimer : HMFTimer

@property (readonly, nonatomic, getter=isIncreasing) BOOL increasing;
@property (readonly, nonatomic) double minimumTimeInterval;
@property (readonly, nonatomic) double maximumTimeInterval;
@property (readonly, nonatomic) long long exponentialFactor;

- (id)initWithMinimumTimeInterval:(double)a0 maximumTimeInterval:(double)a1 exponentialFactor:(long long)a2 options:(unsigned int)a3;
- (double)timeInterval;
- (id)initWithTimeInterval:(double)a0 options:(unsigned int)a1;
- (void)reset;
- (void)__fire;

@end
