@class NSMutableArray;

@interface PIEStatistics : NSObject {
    NSMutableArray *_sequenceValues;
    long long _maxIndex;
    long long _minIndex;
    double _sequenceSum;
    double _variance;
    char _recalculateVariance;
    double _std;
    char _recalculateStd;
    double _mean;
    char _recalculateMean;
}

+ (long long)argMaxValue:(id)a0;
+ (id)maxValue:(id)a0;
+ (id)maxValue:(id)a0 lessThanOrEqualTo:(id)a1;

- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (double)range;
- (double)max;
- (double)valueAtIndex:(unsigned long long)a0;
- (double)min;
- (double)mean;
- (double)variance;
- (double)std;
- (double)sum;
- (long long)maxIndex;
- (void)shift:(double)a0;
- (long long)minIndex;
- (void)_markAllForRecalculation;
- (void)addSequenceValue:(double)a0;
- (id)sequenceValues;

@end
