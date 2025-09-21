@interface HKWorkoutDataSource : NSObject

+ (id)_distanceTypeForActivityType:(unsigned long long)a0 isIndoor:(char)a1;
+ (char)_isBLECollectedDataType:(id)a0 indoorWorkout:(char)a1;
+ (id)_speedTypeForActivityType:(unsigned long long)a0 isIndoor:(char)a1 connectedToFitnessMachine:(char)a2;
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)a0 activityMoveMode:(long long)a1;
+ (id)observedTypesForActivityType:(unsigned long long)a0 isIndoor:(char)a1 connectedToFitnessMachine:(char)a2;
+ (id)observedTypesForActivityType:(unsigned long long)a0 isIndoor:(char)a1 connectedToFitnessMachine:(char)a2 activityMode:(long long)a3;
+ (char)shouldObserveRunningMetricsForActivityMode:(long long)a0 isIndoor:(char)a1 isGymKit:(char)a2;

@end
