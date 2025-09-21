@class NSDictionary;

@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setPerMinuteReadings:) NSDictionary *perMinuteReadings;
@property (readonly, nonatomic) unsigned long long workoutActivityType;

+ (BOOL)supportsSecureCoding;

- (id)initFromStatistics:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithDateInterval:(id)a0 numberOfBuckets:(long long)a1 workoutUUID:(id)a2 workoutActivityType:(unsigned long long)a3;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
