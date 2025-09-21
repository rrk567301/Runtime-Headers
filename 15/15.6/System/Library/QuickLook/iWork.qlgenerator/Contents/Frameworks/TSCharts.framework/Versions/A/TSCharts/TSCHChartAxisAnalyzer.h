@class NSMutableArray, TSCHChartAxis;

@interface TSCHChartAxisAnalyzer : NSObject {
    TSCHChartAxis *_axis;
    char _shouldCalculateMedian;
    double _min;
    double _max;
    double _median;
    unsigned long long _numValues;
    double _sumOfValues;
    char _firstValue;
    char _didCalculateMedian;
    NSMutableArray *_values;
}

+ (id)analyzerForAxis:(id)a0 needsMedian:(char)a1;

- (void).cxx_destruct;
- (double)max;
- (double)min;
- (double)average;
- (double)median;
- (void)addGridValue:(id)a0 forSeries:(id)a1;
- (id)initForAxis:(id)a0 needsMedian:(char)a1;
- (char)p_hasMedianReferenceLine;

@end
