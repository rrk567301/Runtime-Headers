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

- (double)min;
- (double)max;
- (double)range;
- (unsigned long long)count;
- (double)valueAtIndex:(unsigned long long)a0;
- (id)init;
- (long long)maxIndex;
- (void)dealloc;
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
