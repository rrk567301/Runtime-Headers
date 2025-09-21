@class HKQuantityType, _HKFilter;

@interface _HKWorkoutComparisonFilter : _HKComparisonFilter

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (readonly, copy, nonatomic) _HKFilter *subFilter;

+ (char)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)_quantityTypeFromKeyPath:(id)a0 prefix:(id)a1;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedKeyPath:(id)a0;
+ (char)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (char)_acceptsWorkoutWithActivities:(id)a0;
- (char)_acceptsWorkoutWithActivityType:(unsigned long long)a0;
- (char)_acceptsWorkoutWithDuration:(double)a0;
- (char)_acceptsWorkoutWithGoalType:(unsigned long long)a0;
- (char)_acceptsWorkoutWithQuantity:(id)a0;
- (char)acceptsDataObject:(id)a0;
- (void)configureInMemoryFilter;

@end
