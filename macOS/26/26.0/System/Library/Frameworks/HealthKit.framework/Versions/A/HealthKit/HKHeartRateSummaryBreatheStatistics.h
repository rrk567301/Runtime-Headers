@class HKHeartRateSummaryReading;

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setFinalReading:) HKHeartRateSummaryReading *finalReading;

+ (BOOL)supportsSecureCoding;

- (id)initFromStatistics:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
