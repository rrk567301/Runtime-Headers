@class NSMutableArray;

@interface BWMedianStats : BWStats {
    long long _maxNumberOfSamplesForMedianCalculation;
    NSMutableArray *_samples;
}

@property (readonly, nonatomic) double median;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMaxNumberOfSamplesForMedianCalculation:(long long)a0;
- (BOOL)addDataPointP:(double)a0;
- (id)description;
- (void)dealloc;

@end
