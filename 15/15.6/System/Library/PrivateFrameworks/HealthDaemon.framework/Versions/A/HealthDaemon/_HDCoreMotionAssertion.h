@class HKWorkoutConfiguration, NSUUID, CMWorkout, NSArray;

@interface _HDCoreMotionAssertion : HDAssertion {
    char _enableWorkoutChangeDetection;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_sessionUUID;
    CMWorkout *_cmWorkout;
    NSArray *_activityConfigurations;
}

- (void).cxx_destruct;

@end
