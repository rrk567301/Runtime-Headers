@class HKQuantity, HKWorkoutConfiguration, HKDevice, NSUUID;

@interface HKWorkoutBuilderConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKDevice *device;
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (nonatomic) unsigned long long goalType;
@property (copy, nonatomic) HKQuantity *goal;
@property (copy, nonatomic) NSUUID *associatedSessionUUID;
@property (nonatomic) char shouldCollectWorkoutEvents;
@property (nonatomic) char requiresRecovery;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
