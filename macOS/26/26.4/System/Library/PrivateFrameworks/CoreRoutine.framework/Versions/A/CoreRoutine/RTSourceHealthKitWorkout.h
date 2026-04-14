@class NSUUID, NSDate;

@interface RTSourceHealthKitWorkout : RTSource

@property (readonly, nonatomic) NSUUID *workoutUUID;
@property (readonly, nonatomic) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithWorkoutUUID:(id)a0 startDate:(id)a1;

@end
