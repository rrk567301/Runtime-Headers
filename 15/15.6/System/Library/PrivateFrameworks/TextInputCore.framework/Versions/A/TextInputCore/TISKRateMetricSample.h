@interface TISKRateMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int countFactor;
@property (nonatomic) double durationFactor;

+ (id)makeMetric;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)merge:(id)a0;
- (id)rate;
- (void)addToCounter:(int)a0;
- (void)addToDuration:(double)a0;

@end
