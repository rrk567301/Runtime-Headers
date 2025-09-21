@class NSString;

@interface BWStats : NSObject {
    double _min;
    double _max;
    double _sumX;
    double _sumXX;
}

@property (nonatomic) double multiplier;
@property (copy, nonatomic) NSString *unitDesignator;
@property (readonly, nonatomic) long long numberOfSamples;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double standardDeviation;

- (BOOL)addDataPointP:(double)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithStats:(id)a0;
- (void)addDataPoint:(double)a0;
- (id)description;

@end
