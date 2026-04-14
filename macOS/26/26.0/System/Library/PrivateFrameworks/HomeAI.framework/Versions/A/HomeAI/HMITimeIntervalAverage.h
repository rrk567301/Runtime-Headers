@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject {
    MovingAverage *_average;
}

- (double)value;
- (void)addValue:(double)a0;
- (void).cxx_destruct;
- (id)initWithMaxCapacity:(long long)a0;
- (double)valueForInterval:(double)a0 defaultValue:(double)a1;

@end
