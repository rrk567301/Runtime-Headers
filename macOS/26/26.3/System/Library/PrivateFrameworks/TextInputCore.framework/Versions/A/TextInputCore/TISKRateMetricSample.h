@interface TISKRateMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int countFactor;
@property (nonatomic) double durationFactor;

+ (id)makeMetric;

- (void)merge:(id)a0;
- (id)rate;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addToCounter:(int)a0;
- (void)addToDuration:(double)a0;

@end
