@interface HKWorkoutDataSource : NSObject

+ (id)_calorieAndEffortTypesForActivityType:(unsigned long long)a0 moveMode:(long long)a1 isIndoor:(BOOL)a2 isAppleWatch:(BOOL)a3;
+ (id)_connectedMachineTypesForActivityType:(unsigned long long)a0 connectedToFitnessMachine:(BOOL)a1;
+ (id)_cyclingTypesForActivityType:(unsigned long long)a0 isAppleWatch:(BOOL)a1;
+ (id)_distanceTypeForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 isAppleWatch:(BOOL)a2;
+ (id)_divingTypesForActivityType:(unsigned long long)a0 isAppleWatch:(BOOL)a1;
+ (id)_heartRateTypeForActivityType:(unsigned long long)a0;
+ (BOOL)_isBLECollectedDataType:(id)a0 indoorWorkout:(BOOL)a1;
+ (id)_runningMetricTypesForActivityType:(unsigned long long)a0 moveMode:(long long)a1 connectedToFitnessMachine:(BOOL)a2 isIndoor:(BOOL)a3 isAppleWatch:(BOOL)a4;
+ (BOOL)_shouldCollectCaloriesForMoveMode:(long long)a0 isAppleWatch:(BOOL)a1;
+ (BOOL)_shouldCollectConnectedMachineTypesForActivityType:(unsigned long long)a0 connectedToFitnessMachine:(BOOL)a1;
+ (BOOL)_shouldCollectCyclingTypesForActivityType:(unsigned long long)a0 isAppleWatch:(BOOL)a1;
+ (BOOL)_shouldCollectDistanceForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 isAppleWatch:(BOOL)a2;
+ (BOOL)_shouldCollectDivingTypesForActivityType:(unsigned long long)a0;
+ (BOOL)_shouldCollectHeartRateForActivityType:(unsigned long long)a0;
+ (BOOL)_shouldCollectRunningMetricTypesForActivityType:(unsigned long long)a0 moveMode:(long long)a1 connectedToFitnessMachine:(BOOL)a2 isIndoor:(BOOL)a3;
+ (BOOL)_shouldCollectSpeedForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 connectedToFitnessMachine:(BOOL)a2 isAppleWatch:(BOOL)a3;
+ (BOOL)_shouldCollectStepCountTypesForActivityType:(unsigned long long)a0;
+ (BOOL)_shouldCollectSwimmingTypesForActivityType:(unsigned long long)a0 isAppleWatch:(BOOL)a1;
+ (id)_sourcePredicateForSampleType:(id)a0 isIndoor:(BOOL)a1;
+ (id)_speedTypeForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 connectedToFitnessMachine:(BOOL)a2 isAppleWatch:(BOOL)a3;
+ (id)_stepCountTypeForActivityType:(unsigned long long)a0;
+ (id)_swimmmingTypesForActivityType:(unsigned long long)a0 isAppleWatch:(BOOL)a1;
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)a0 activityMoveMode:(long long)a1;
+ (id)observedTypesForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 connectedToFitnessMachine:(BOOL)a2;
+ (id)observedTypesForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 connectedToFitnessMachine:(BOOL)a2 activityMode:(long long)a3;

@end
