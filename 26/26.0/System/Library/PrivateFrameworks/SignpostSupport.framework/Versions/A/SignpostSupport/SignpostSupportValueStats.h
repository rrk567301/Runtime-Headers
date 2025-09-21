@class NSString;

@interface SignpostSupportValueStats : NSObject <SignpostJSONRepresentable> {
    double *_values;
    unsigned long long _capacity;
    BOOL _isSorted;
    struct { double sum; double min; double max; double variance; double p50; double p90; double p95; double p99; } _stats;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double sum;
@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double variance;
@property (readonly, nonatomic) double stddev;
@property (readonly, nonatomic) double p50;
@property (readonly, nonatomic) double p90;
@property (readonly, nonatomic) double p95;
@property (readonly, nonatomic) double p99;
@property (nonatomic) BOOL supportsDynamicPercentiles;
@property (readonly, nonatomic) NSString *unitsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addValue:(double)a0;
- (void)addValues:(const double *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addValues:(id)a0;
- (id)jsonDescription:(unsigned long long)a0;
- (double)_percentile:(double)a0;
- (void)_sortValuesIfNeeded;
- (id)initWithCapacity:(unsigned long long)a0 unitsLabel:(id)a1;
- (id)initWithValues:(id)a0 unitsLabel:(id)a1 supportsDynamicPercentiles:(BOOL)a2;
- (id)valueForPercentile:(double)a0;

@end
