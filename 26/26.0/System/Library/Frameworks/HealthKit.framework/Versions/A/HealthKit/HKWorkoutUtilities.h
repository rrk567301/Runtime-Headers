@interface HKWorkoutUtilities : NSObject

+ (BOOL)_validateStartAndEnd:(id)a0 end:(id)a1 error:(id *)a2;
+ (id)_calorieAndEffortTypes;
+ (BOOL)_validateFirstZone:(id)a0 error:(id *)a1;
+ (BOOL)_validateLastZone:(id)a0 error:(id *)a1;
+ (BOOL)_validateMiddleZones:(id)a0 previousEndQuantity:(id)a1 error:(id *)a2;
+ (id)calorieAndEffortTypesForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1;
+ (id)cyclingTypes;
+ (id)distanceTypeForActivityType:(unsigned long long)a0;
+ (id)divingTypes;
+ (id)gymKitTypes;
+ (BOOL)isFirstPartyForIdentifier:(id)a0;
+ (id)maxDataTypesForWorkoutActivityType:(unsigned long long)a0;
+ (id)observedDataTypesForAllWorkoutActivities;
+ (id)runningTypes;
+ (id)speedTypeForActivityType:(unsigned long long)a0;
+ (id)swimmingTypes;
+ (BOOL)validateZones:(id)a0 error:(id *)a1;

@end
