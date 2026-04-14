@class NSMutableArray;

@interface BWMedianStats : BWStats {
    long long _maxNumberOfSamplesForMedianCalculation;
    NSMutableArray *_samples;
}

@property (readonly, nonatomic) double median;

- (id)initWithMaxNumberOfSamplesForMedianCalculation:(long long)a0;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)addDataPointP:(double)a0;

@end
