@class HKWorkout, HKWorkoutActivity, NSArray;

@interface HKWorkoutEffortRelationship : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKWorkout *workout;
@property (readonly, copy, nonatomic) HKWorkoutActivity *activity;
@property (readonly, copy, nonatomic) NSArray *samples;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWorkout:(id)a0 activity:(id)a1 samples:(id)a2;

@end
