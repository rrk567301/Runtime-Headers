@class NSUUID, NSDate;

@interface RTSourceHealthKitWorkout : RTSource

@property (readonly, nonatomic) NSUUID *workoutUUID;
@property (readonly, nonatomic) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWorkoutUUID:(id)a0 startDate:(id)a1;

@end
