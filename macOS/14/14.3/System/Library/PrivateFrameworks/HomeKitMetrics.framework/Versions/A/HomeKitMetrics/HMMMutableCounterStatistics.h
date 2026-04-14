@class HMMCounterStatistics;

@interface HMMMutableCounterStatistics : NSObject {
    long long _minValue;
    long long _maxValue;
    long long _sumOfValues;
    long long _valueCount;
}

@property (readonly, copy, nonatomic) HMMCounterStatistics *statistics;

- (void)addValue:(long long)a0;

@end
