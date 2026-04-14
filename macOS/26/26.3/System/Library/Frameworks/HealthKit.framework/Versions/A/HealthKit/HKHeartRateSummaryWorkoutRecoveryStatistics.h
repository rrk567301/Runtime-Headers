@class NSDictionary;

@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setPerMinuteReadings:) NSDictionary *perMinuteReadings;
@property (readonly, nonatomic) unsigned long long workoutActivityType;

+ (BOOL)supportsSecureCoding;

- (id)initWithDateInterval:(id)a0 numberOfBuckets:(long long)a1 workoutUUID:(id)a2 workoutActivityType:(unsigned long long)a3;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initFromStatistics:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
