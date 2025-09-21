@class HKWorkoutConfiguration, NSUUID, NSArray, HKWorkoutActivity;

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (nonatomic) long long sessionType;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) char requiresCoreLocationAssertion;
@property (nonatomic) char requiresRecovery;
@property (nonatomic) char supportsAppRelaunchForRecovery;
@property (nonatomic) char shouldStopPreviousSession;
@property (nonatomic) char supports3rdPartyAOT;
@property (retain, nonatomic) HKWorkoutActivity *currentActivity;
@property (retain, nonatomic) NSArray *activityConfigurations;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
