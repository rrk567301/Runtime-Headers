@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject {
    MovingAverage *_average;
}

- (id)initWithMaxCapacity:(long long)a0;
- (void)addValue:(double)a0;
- (void).cxx_destruct;
- (double)value;
- (double)valueForInterval:(double)a0 defaultValue:(double)a1;

@end
