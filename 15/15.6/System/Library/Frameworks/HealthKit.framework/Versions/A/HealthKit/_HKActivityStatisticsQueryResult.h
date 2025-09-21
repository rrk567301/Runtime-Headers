@class NSArray;

@interface _HKActivityStatisticsQueryResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *activeEnergyResults;
@property (copy, nonatomic) NSArray *appleMoveTimeResults;
@property (copy, nonatomic) NSArray *appleExerciseTimeResults;
@property (copy, nonatomic) NSArray *appleStandHourResults;
@property (copy, nonatomic) NSArray *workoutResults;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
