@class NSMutableArray;

@interface BWMedianStats : BWStats {
    long long _maxNumberOfSamplesForMedianCalculation;
    NSMutableArray *_samples;
}

@property (readonly, nonatomic) double median;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)addDataPointP:(double)a0;
- (id)description;
- (id)initWithMaxNumberOfSamplesForMedianCalculation:(long long)a0;
- (void)dealloc;

@end
