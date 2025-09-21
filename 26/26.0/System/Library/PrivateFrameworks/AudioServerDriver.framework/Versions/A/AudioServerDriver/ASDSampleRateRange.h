@interface ASDSampleRateRange : NSObject

@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;

+ (id)rangeWithMinimum:(double)a0 maximum:(double)a1;
+ (id)rangeWithSingleRate:(double)a0;

- (id)initWithMinimum:(double)a0 maximum:(double)a1;

@end
