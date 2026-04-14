@class NSString, NSMutableArray;

@interface BWStats : NSObject {
    BOOL _medianCalculationEnabled;
    long long _maxNumberOfSamplesForMedianCalculation;
    double _sumX;
    double _sumXX;
    NSMutableArray *_samples;
}

@property (nonatomic) long long nextDataPointIndex;
@property (nonatomic) double multiplier;
@property (copy, nonatomic) NSString *unitDesignator;
@property (readonly, nonatomic) long long numberOfSamples;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double standardDeviation;
@property (readonly, nonatomic) double median;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)addDataPoint:(double)a0;
- (id)initWithMedianCalculationEnabled:(BOOL)a0 maxNumberOfSamplesForMedianCalculation:(long long)a1;
- (id)initWithStats:(id)a0;
- (void)removeDataPoint:(double)a0;

@end
