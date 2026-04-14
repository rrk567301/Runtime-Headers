@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject {
    MovingAverage *_average;
}

- (void)addValue:(double)a0;
- (double)value;
- (void).cxx_destruct;
- (id)initWithMaxCapacity:(long long)a0;
- (double)valueForInterval:(double)a0 defaultValue:(double)a1;

@end
