@class NSUUID, NSDate;

@interface RTSourceHealthKitWorkout : RTSource

@property (readonly, nonatomic) NSUUID *workoutUUID;
@property (readonly, nonatomic) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithWorkoutUUID:(id)a0 startDate:(id)a1;

@end
