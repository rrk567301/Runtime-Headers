@class NSMutableArray;

@interface PIEStatistics : NSObject {
    NSMutableArray *_sequenceValues;
    long long _maxIndex;
    long long _minIndex;
    double _sequenceSum;
    double _variance;
    BOOL _recalculateVariance;
    double _std;
    BOOL _recalculateStd;
    double _mean;
    BOOL _recalculateMean;
}

+ (id)maxValue:(id)a0;
+ (id)maxValue:(id)a0 lessThanOrEqualTo:(id)a1;
+ (long long)argMaxValue:(id)a0;

- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (double)range;
- (double)max;
- (double)valueAtIndex:(unsigned long long)a0;
- (double)min;
- (double)variance;
- (double)mean;
- (double)std;
- (double)sum;
- (long long)maxIndex;
- (void)shift:(double)a0;
- (void)addSequenceValue:(double)a0;
- (void)_markAllForRecalculation;
- (id)sequenceValues;
- (long long)minIndex;

@end
