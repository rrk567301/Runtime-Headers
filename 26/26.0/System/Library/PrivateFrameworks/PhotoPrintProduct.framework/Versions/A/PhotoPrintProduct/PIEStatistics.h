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

+ (long long)argMaxValue:(id)a0;
+ (id)maxValue:(id)a0;
+ (id)maxValue:(id)a0 lessThanOrEqualTo:(id)a1;

- (double)max;
- (double)min;
- (double)valueAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)init;
- (double)range;
- (long long)maxIndex;
- (double)mean;
- (double)variance;
- (double)std;
- (void)shift:(double)a0;
- (double)sum;
- (long long)minIndex;
- (void)_markAllForRecalculation;
- (void)addSequenceValue:(double)a0;
- (id)sequenceValues;

@end
