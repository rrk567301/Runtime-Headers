@class HKQuantity, NSArray, NSDateInterval, HKHeartRateSummaryStatistics;

@interface HKHeartRateSummary : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long activityCacheIndex;
@property (retain, nonatomic) NSDateInterval *heartRateDateInterval;
@property (retain, nonatomic) HKQuantity *restingHeartRate;
@property (retain, nonatomic) HKQuantity *walkingAverageHeartRate;
@property (retain, nonatomic) HKHeartRateSummaryStatistics *allDayStatistics;
@property (retain, nonatomic) NSArray *workoutStatistics;
@property (retain, nonatomic) NSArray *workoutRecoveryStatistics;
@property (retain, nonatomic) NSArray *breatheStatistics;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deepCopy;
- (id)initWithActivityCacheIndex:(long long)a0 heartRateDateInterval:(id)a1 restingHeartRate:(id)a2 walkingAverageHeartRate:(id)a3 allDayStatistics:(id)a4 workoutStatistics:(id)a5 workoutRecoveryStatistics:(id)a6 breatheStatistics:(id)a7;

@end
